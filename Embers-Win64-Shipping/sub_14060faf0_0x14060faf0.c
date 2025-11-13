// 函数: sub_14060faf0
// 地址: 0x14060faf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr

if (*(arg1 + 0xd0) != 0)
    int64_t rcx_13 = *arg2
    
    if (rcx_13 != 0)
        return sub_140a74f90(rcx_13)
else
    sub_140615620(arg1)
    void* rbx_1 = *(arg1 + 0xc0)
    
    if (rbx_1 != 0)
        sub_14060d4c0(rbx_1)
        j_sub_140a74f90(rbx_1)
    
    *(arg1 + 0xc0) = 0
    int64_t rdx_1 = *arg2
    char* var_118 = nullptr
    int32_t result_1 = 0
    result = sub_140b1ef70(&var_118, rdx_1, 0)
    
    if (result.b != 0)
        result = result_1
        
        if (result != 0)
            char* rbx_2 = var_118
            std::streambuf::streambuf<char, struct std::char_traits<char> >()
            class std::streambuf _Strbuf
            _Strbuf.vtable = &data_142d64308
            *_Strbuf._IGfirst = rbx_2
            *_Strbuf._IGnext = rbx_2
            *_Strbuf._IGcount = result
            class std::istream var_88
            std::istream::istream<char, struct std::char_traits<char> >(&var_88, &_Strbuf, 0)
            int32_t* rax_3 = j_sub_140a82f30(0x28)
            int32_t* rax_4
            
            if (rax_3 == 0)
                rax_4 = nullptr
            else
                rax_4 = sub_14060cb10(rax_3, &var_88)
            
            *(arg1 + 0xc0) = rax_4
            sub_140612870(arg1 + 0xc8, rax_4)
            int64_t var_108
            int64_t* rax_5 = sub_14060f280(arg1, &var_108)
            
            if (arg1 + 0x180 != rax_5)
                int64_t rcx_7 = *(arg1 + 0x180)
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                *(arg1 + 0x180) = *rax_5
                *rax_5 = 0
                *(arg1 + 0x188) = rax_5[1].d
                *(arg1 + 0x18c) = *(rax_5 + 0xc)
                rax_5[1] = 0
            
            int64_t rcx_9 = var_108
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            *(arg1 + 0x190) = 0
            std::basic_istream<char,struct std::char_traits<char> >::`vbase destructor'()
            result = std::streambuf::~streambuf<char, struct std::char_traits<char> >(&_Strbuf)
    
    char* rcx_11 = var_118
    
    if (rcx_11 != 0)
        result = sub_140a74f90(rcx_11)
    
    int64_t rcx_12 = *arg2
    
    if (rcx_12 != 0)
        return sub_140a74f90(rcx_12)

return result
