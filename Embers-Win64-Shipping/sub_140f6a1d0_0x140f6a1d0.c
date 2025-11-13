// 函数: sub_140f6a1d0
// 地址: 0x140f6a1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax
uint32_t rdx
uint32_t r8
rax, rdx, r8 = sub_140ab3dc0(&arg1[0xbf])

if (rax == 0)
    int32_t i_7 = arg1[0xf2].d
    int32_t rsi_1 = 0
    int32_t rax_1 = 0
    int32_t rcx_1
    rcx_1.b = arg1[0xf3].b == 1
    void* rdi_1 = &arg1[0xf0]
    
    if (rcx_1 + *(arg1 + 0x794) s>= 0)
        rax_1 = rcx_1 + *(arg1 + 0x794)
    
    int32_t arg_c = rax_1
    int32_t i_1 = i_7
    
    if (arg1[0xf1].b == 0)
        rdi_1 = &i_1
    
    int64_t rdi_2 = *rdi_1
    uint32_t rdx_2 = (rdi_2 u>> 0x20).d
    
    if (arg2 != 0)
        int64_t rax_2 = i_1.q
        
        if (rdi_2.d != i_7)
            if (rdi_2.d s< i_7)
                rax_2 = rdi_2
            
            rdi_2 = rax_2
        else if (rdx_2 s>= (rax_2 u>> 0x20).d)
            rdi_2 = rax_2
    else if (rdi_2.d == i_7)
        int64_t rax_3 = i_1.q
        
        if (rdx_2 s<= (rax_3 u>> 0x20).d)
            rdi_2 = rax_3
    else if (rdi_2.d s<= i_7)
        rdi_2 = i_1.q
    
    int16_t** rax_4 = sub_140ac6680(&arg1[0xbf])
    void* r14_1 = arg1[9]
    int32_t i = rdi_2.d
    rdx = (rdi_2 u>> 0x20).d
    int32_t rcx_8 = rax_4[1].d
    int32_t i_6 = rcx_8 - 1
    
    if (rcx_8 == 0)
        i_6 = 0
    
    i_1 = i_6
    
    do
        int64_t i_4 = sx.q(i)
        int16_t* rax_6
        
        if (rax_4[1].d == 0)
            rax_6 = &data_142d40450
        else
            rax_6 = *rax_4
        
        int32_t rax_7
        int64_t zmm0_1
        rax_7, r8, zmm0_1 =
            sub_140a23cf0(*(i_4 * 0x70 + *(r14_1 + 0x18)), rax_6, arg1[0xc2].d, zx.d(arg2), rdx)
        
        if (rax_7 != 0xffffffff)
            int32_t i_2 = i
            int32_t arg_1c = rax_7
            
            if (&i_2 != &arg1[0xf0])
                arg1[0xf0] = i_2.q
                arg1[0xf1].b = 1
            
            bool r9_2 = false
            void* r10_1 = arg1[9]
            int32_t r8_4 = i_1 + rax_7
            arg_1c = r8_4
            i_2 = i
            int64_t rax_12 = i_2.q
            i_1.q = rax_12
            
            if (r8_4 s> 0)
                int32_t rcx_15 = *(*(i_4 * 0x70 + *(r10_1 + 0x18)) + 8)
                int32_t rdx_8 = rcx_15 - 1
                
                if (rcx_15 == 0)
                    rdx_8 = 0
                
                if (rdx_8 == r8_4)
                    uint32_t rax_13 = (rax_12 u>> 0x20).d
                    r9_2 = true
                    i_1 = i
                    
                    if (rax_13 - 1 s>= 0)
                        rsi_1 = rax_13 - 1
                    
                    arg_c = rsi_1
                    i_1.q = i_1.q
            
            rdx, r8 = sub_140f8af60(&arg1[0xf2], r10_1, &i_1, r9_2, zmm0_1)
            break
        
        if (arg2 == 0)
            int32_t i_3 = i + 1
            rdx = 0
            i = 0
            
            if (i_3 != *(r14_1 + 0x20))
                i = i_3
        else
            int32_t i_5 = i
            i -= 1
            
            if (i_5 - 1 s< 0)
                i = *(r14_1 + 0x20) - 1
            
            int32_t rax_10 = *(*(sx.q(i) * 0x70 + *(r14_1 + 0x18)) + 8)
            rdx = rax_10 - 1
            
            if (rax_10 == 0)
                rdx = 0
    while (i != rdi_2.d)

return sub_140f8fc70(arg1, rdx.b, r8) __tailcall
