StrangeMatrix transpose(StrangeMatrix m)
{
	StrangeMatrix m_T;
	m_T.first_line[0] = m.first_line[0];
	m_T.first_line[1] = m.second_line[0];
	m_T.first_line[2] = m.third_line[0];
	m_T.second_line[0] = m.first_line[1];
	m_T.second_line[1] = m.second_line[1];
	m_T.second_line[2] = m.third_line[1];
	m_T.third_line[0] = m.first_line[2];
	m_T.third_line[1] = m.second_line[2];
	m_T.third_line[2] = m.third_line[2];
	return m_T;
}