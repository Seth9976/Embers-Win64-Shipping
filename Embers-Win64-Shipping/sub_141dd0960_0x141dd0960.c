// 函数: sub_141dd0960
// 地址: 0x141dd0960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    *arg1 = arg2
else
    void* rax_1 = sub_1425492f0()
    
    if (rax_1 == 0)
        *arg1 = arg2
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> arg2[7].d || *(arg2[6] + (rax_2 << 3)) != rax_1 + 0x30)
            *arg1 = arg2
        else
            void* rax_4 = sub_1425492f0()
            int64_t rax_5
            
            if (rax_4 != 0)
                rax_5 = sx.q(*(rax_4 + 0x38))
            
            int64_t* rsi_1
            
            if (rax_4 == 0 || rax_5.d s> arg2[7].d || *(arg2[6] + (rax_5 << 3)) != rax_4 + 0x30)
                rsi_1 = nullptr
            else
                rsi_1 = arg2
            
            int64_t* rdi_1 = rsi_1[0x23]
            
            if (rdi_1 == 0)
                (*(*rsi_1 + 0x390))(rsi_1)
                rdi_1 = rsi_1[0x23]
            
            if (rdi_1 == 0)
                *arg1 = arg2
            else
                void arg_8
                
                if ((*(*rdi_1 + 0x268))(rdi_1) == 0)
                    *arg1 = arg2
                else
                    *arg1 = *(*(*rdi_1 + 0x270))(rdi_1, &arg_8, arg3, arg4)

return arg1
