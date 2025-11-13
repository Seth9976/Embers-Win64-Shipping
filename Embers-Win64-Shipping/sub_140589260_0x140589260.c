// 函数: sub_140589260
// 地址: 0x140589260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (arg1[0xe].b & 1) == 0
*arg1 = &std::stringbuf::`vftable'{for `std::streambuf'}

if (not(cond:0))
    int64_t vFunc_0 = arg1[8]->vFunc_0
    int64_t rdx_2
    
    if (vFunc_0 == 0)
        rdx_2 = arg1[0xa]->vFunc_0 + arg1[7]->vFunc_0
    else
        rdx_2 = arg1[0xb]->vFunc_0 + vFunc_0
    
    void* vFunc_0_1 = arg1[3]->vFunc_0
    
    if (rdx_2 - vFunc_0_1 u>= 0x1000)
        void* vFunc_0_2 = *(vFunc_0_1 - 8)
        
        if (vFunc_0_1 - vFunc_0_2 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        vFunc_0_1 = vFunc_0_2
    
    j_sub_140a74f90(vFunc_0_1)

arg1[3]->vFunc_0 = 0
arg1[7]->vFunc_0 = 0
arg1[0xa]->vFunc_0 = 0
arg1[4]->vFunc_0 = 0
arg1[8]->vFunc_0 = 0
arg1[0xb]->vFunc_0 = 0
arg1[0xe].d &= 0xfffffffe
arg1[0xd] = 0
return std::streambuf::~streambuf<char, struct std::char_traits<char> >(arg1) __tailcall
