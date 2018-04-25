#include <iostream>
#include "gondolaparts.h"



GondolaParts::GondolaParts(const int number_aisles,const int aisles_length )
	:m_number_aisles(number_aisles),
	 m_aisles_length(aisles_length),
	 m_number_sections((aisles_length / 4)),
	 m_total_number_sections((m_number_sections * number_aisles))
{
}


const int GondolaParts::get_left_upright_qty(){
	int left_upright_qty = m_number_aisles;

	return(left_upright_qty);
}

const int GondolaParts::get_right_upright_qty() {
	int right_upright_qty = m_number_aisles;

	return(right_upright_qty);
}

const int GondolaParts::get_center_upright_qty() {
	
	int centerUprightQty = ((m_number_sections - 1) * m_number_aisles);
	
	return{centerUprightQty};
}

const int GondolaParts::get_spacers() {
	int spacers = m_total_number_sections * 3;

	return{ spacers };
}

const int GondolaParts::get_peg_stop() {
	int peg_stop = m_number_sections;
	return(peg_stop);
}

const int GondolaParts::get_toe_kick() {
	int toe_kick = m_total_number_sections * 2;

	return(toe_kick);
}

const int GondolaParts::get_top_cap() {
	int top_cap = m_total_number_sections;

	return(top_cap);
}

const int GondolaParts::get_peg_board() {
	int peg_board = m_total_number_sections * 2;

	return(peg_board);

}

GondolaParts::end_cap GondolaParts::get_endcap_parts(){

    end_cap.top_cap = (m_number_aisles);
    end_cap.left_upright = (m_number_aisles);
    end_cap.right_upright = (m_number_aisles);
    end_cap.peg_stop = (m_number_aisles *2);
    end_cap.spacers = (m_number_aisles *3);
    end_cap.toe_kick = (m_number_aisles);

    return(end_cap);
}
