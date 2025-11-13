// 函数: sub_14215f7c0
// 地址: 0x14215f7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i

if (arg2 == 0)
labelid_2:
    i.b = 0
else
    void* rax = *(arg1 + 0x28)
    
    if (rax == 0)
    label_14215f874:
        bool cond:0_1
        
        if (*(arg1 + 0x58) == 0)
            i = *(arg1 + 0x38)
            int64_t rsi_2 = sx.q(*(arg1 + 0x40))
            
            for (int64_t rcx_7 = i + (rsi_2 << 3); i != rcx_7; i += 8)
                if (*i == arg2)
                    goto label_14215f937_2
            
            int32_t rax_4 = (rsi_2 + 1).d
            *(arg1 + 0x40) = rax_4
            
            if (rax_4 s> *(arg1 + 0x44))
                sub_1405a4d70(arg1 + 0x38)
            
            cond:0_1 = rsi_2.d == 0xffffffff
            *(*(arg1 + 0x38) + (rsi_2 << 3)) = arg2
        else
            int32_t* i_1 = *(arg1 + 0x48)
            
            for (void* rsi_1 = &i_1[sx.q(*(arg1 + 0x50)) * 2]; i_1 != rsi_1; i_1 = &i_1[2])
                i, arg3 = sub_1405a66e0(i_1, arg2, arg3.d)
                
                if (i.b != 0)
                    goto label_14215f937_2
            
            int64_t arg_10
            sub_140d3a3a0(&arg_10, arg2)
            int64_t rbx_1 = sx.q(*(arg1 + 0x50))
            int32_t rax_3 = (rbx_1 + 1).d
            *(arg1 + 0x50) = rax_3
            
            if (rax_3 s> *(arg1 + 0x54))
                sub_1405a4d70(arg1 + 0x48)
            
            cond:0_1 = rbx_1.d == 0xffffffff
            *(*(arg1 + 0x48) + (rbx_1 << 3)) = arg_10
        
        if (cond:0_1)
        labelid_2:
            i.b = 0
        else
            sub_140920c10(arg1 + 0x78, arg2)
            i.b = 1
    else
        bool cond:1_1
        
        if (*(arg1 + 0x30) == 0)
            void* rdx_2 = *(arg2 + 0x10)
            arg3 = rax + 0x30
            i = sx.q(*(rax + 0x38))
            
            if (i.d s> *(rdx_2 + 0x38))
            labelid_2:
                i.b = 0
            else
                cond:1_1 = *(*(rdx_2 + 0x30) + (i << 3)) != arg3
            label_14215f86a:
                
                if (not(cond:1_1))
                    goto label_14215f874
                
            labelid_2:
                i.b = 0
        else
            void* rax_1 = sub_140bdf2e0()
            void* rdx = *(arg2 + 0x10)
            arg3 = rax_1 + 0x30
            i = sx.q(*(rax_1 + 0x38))
            
            if (i.d s> *(rdx + 0x38))
            labelid_2:
                i.b = 0
            else if (*(*(rdx + 0x30) + (i << 3)) != arg3)
            label_14215f937:
                i.b = 0
            else
                i = *(arg1 + 0x28)
                
                if (i == 0)
                label_14215f937_1:
                    i.b = 0
                else
                    int64_t rdx_1 = i + 0x30
                    i = sx.q(*(i + 0x38))
                    
                    if (i.d s<= *(arg2 + 0x38))
                        cond:1_1 = *(*(arg2 + 0x30) + (i << 3)) != rdx_1
                        goto label_14215f86a
                    
                label_14215f937_2:
                    i.b = 0

return i
