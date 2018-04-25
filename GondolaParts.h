#ifndef GONDOLAPARTS_H
#define GONDOLAPARTS_H


class GondolaParts
{

public:
    GondolaParts(const int number_aisles, const int aisles_length);
	
	// Declare class get functions: left upright, right upright, center upright
    //spacers, peg stop, toe kick, top cap, peg board sheets,endcap parts
	const int get_left_upright_qty();
	const int get_right_upright_qty();
	const int get_center_upright_qty();
	const int get_spacers();
	const int get_peg_stop();
	const int get_toe_kick();
	const int get_top_cap();
	const int get_peg_board();
    end_cap get_endcap_parts();

    struct end_cap_parts{
        int left_upright, right_upright, toe_kick,
            peg_stop, spacers, top_cap;
    }end_cap;

private:
	const int m_number_aisles,
			  m_aisles_length,
	          m_number_sections,
			  m_total_number_sections;
};

#endif // GONDOLAPARTS_H
