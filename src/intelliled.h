/*
 * uint16_tELLILED class
 * 
 * @autor: Thomas Winkler
 * @copyright: 2019-11-17
 * @lizence: CC0
 */

/*
 * This software is open source under the creative commons CC0 license
 */
 
/*
 * The uint16_tELLILED class controlles an output for display.
 * With set_blink a blink style can be added, updated with the blink() method.
 * 
 * blink(uint16_t): set the blink time in ms
 * flash(): the uint16_tELLILED only flashes 10 ms in the speed set by time()
 *
 * on(): switch the led on
 * off(): switch the led off
 *
 * color(COLOR): set a color when two ports are defined
 * offColor(COLOR): set a color instead of off state
 * 
 * forceFlash(time): set a time to flash, even at on state
 */

#ifndef uint16_tELLILED_H
#define uint16_tELLILED_H

#define uint16_tELLILED_RED 0
#define uint16_tELLILED_GREEN 1
#define uint16_tELLILED_YELLOW 2


class uint16_tELLILED {

  public:
    uint16_tELLILED(void);
    uint16_tELLILED(uint16_t port, uint16_t port1=false);
    void begin(uint16_t port, uint16_t port1=false);
    uint8_t available(void);
    void setBlink(uint16_t);
    void forceBlink(uint16_t);
    void blink(uint16_t);
    void flash(uint16_t);
    void on(void);
    void off(void);
    void color(uint16_t);
    void color(uint16_t, uint16_t);
    void offColor(uint16_t);
    void toggle(void);
    void update(void);

  private:
    bool _is_on;
    uint16_t _force_blink;
    bool _flash_status;

    uint16_t _led_port;
    uint16_t _led_port1;

    uint8_t _led_count;
    
    uint16_t _led_color;
    uint16_t _led_color1;
    bool _off_color;
    
    double _timeout;
    uint16_t _blink_time;

	void _set_led(uint16_t);
    void _clear_led(void);
    void _on(void);
    void _off(void);
    void _flash_on(void);
    void _flash_off(void);
    void _reset(void);
};


#endif
