// 函数: sub_141d06bd0
// 地址: 0x141d06bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140a54810()

if (rax != 0)
    sub_140af2b60()
    rax = sub_140b21a10(&data_143dbb3f0, u"FileOpenLog")
    
    if (rax == 0)
        char rax_1 = sub_140af4ce0()
        int64_t rbx
        
        if (data_143de5d00 == 0)
            rbx.b = 0
        else
            int64_t* rcx = data_143de5cf8
            
            if (rcx == 0)
                rbx.b = 0
            else
                rax_1 = (*(*rcx + 0x28))(rcx)
                
                if (rax_1 == 0)
                    rbx.b = 0
                else
                    rbx.b = 1
        
        int64_t rdi_1 = *(arg1 + 8)
        
        if (data_143f36250 == 0)
            int64_t* rax_3 = j_sub_140a82f30(0x2c8)
            int64_t* rcx_2
            
            if (rax_3 == 0)
                rcx_2 = nullptr
            else
                rcx_2 = sub_141cf7f00(rax_3, rdi_1, rbx.b)
            
            rax_1 = 0
            
            if (0 != data_143f36250)
                return (data_143f36250).b
            
            data_143f36250 = rcx_2
        
        return rax_1

data_143a21038 = 0
return rax
