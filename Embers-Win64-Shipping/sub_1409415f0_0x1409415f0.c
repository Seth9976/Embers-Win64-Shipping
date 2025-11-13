// 函数: sub_1409415f0
// 地址: 0x1409415f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
void* r14 = arg1
void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
void* rdi = nullptr
int64_t arg_10 = 0
void* result = sub_140d2dfc0(sub_140945100(), rax, 0, 0, 0, 0, 0, 0, 0)
*(r14 + 0xa0) = result
void* result_1 = result

if (result != 0)
    int32_t i = 0
    
    if (*(result + 0x40) s> 0)
        int64_t r15_1 = 0
        
        do
            int64_t* r14_1 = *(result_1 + 0x38)
            int16_t* rbx_1
            
            if (*(r14_1 + r15_1 + 0x10) == 0)
                rbx_1 = &data_142d40450
            else
                rbx_1 = *(r14_1 + r15_1 + 8)
            
            void* rax_3 = sub_140d2f240(sub_140d41340(), 0, rbx_1, 0, 0, 0)
            
            if (rax_3 != 0)
                int64_t r13_1 = sx.q(*(result_1 + 0x30))
                int32_t rcx_3 = (r13_1 + 1).d
                *(result_1 + 0x30) = rcx_3
                
                if (rcx_3 s> *(result_1 + 0x34))
                    sub_1405a4f90(result_1 + 0x28)
                
                int64_t rcx_6 = r13_1 << 4
                __builtin_memset(rcx_6 + *(result_1 + 0x28), 0, 0x18)
                int64_t* r13_3 = *(result_1 + 0x28) + rcx_6
                *r13_3 = *(r14_1 + r15_1)
                void* rax_6 = sub_140cde0b0()
                
                if ((1 & sub_140b5b8a0(0, 0)) != 0)
                    sub_140d19010(rax_6, 
                        NewObject with empty name can't be used to create default subobjects (inside of "
                    "UObject derived class constructor) as it produces incon")
                
                r13_3[1] = sub_140d2dfc0(rax_3, rax_6, 0, 0, 0, 0, 0, 0, 0)
            
            i += 1
            r15_1 += 0x18
        while (i s< *(result_1 + 0x40))
        
        r14 = arg_8
        result_1 = *(r14 + 0xa0)
    
    int32_t var_40_1 = 0
    int64_t* rax_9 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_9 != 0)
        rax_9[1] = r14
        *rax_9 = &data_142e22de8
        *(rax_9 + 0x10) = sub_140942180.o
        rax_9[5] = sub_140a387b0()
        *rax_9 = &data_142e22e40
    
    if (rax_9 != 0)
        sub_140599630(result_1 + 0x48, 1)
        (*(*rax_9 + 0x30))(rax_9, &arg_8)
        int64_t rbp_1 = sx.q(*(result_1 + 0x50))
        int32_t rax_12 = (rbp_1 + 1).d
        *(result_1 + 0x50) = rax_12
        
        if (rax_12 s> *(result_1 + 0x54))
            sub_1405a4f90(result_1 + 0x48)
        
        void** rax_15 = (rbp_1 << 4) + *(result_1 + 0x48)
        *rax_15 = rax_9
        rax_15[1].d = 3
    
    result = zx.q(*(*(r14 + 0xa0) + 0xc))
    
    if (result.d s< data_143e1d9b4)
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(result.d)
        uint32_t rdx_7 = zx.d(temp0_1)
        int32_t rax_18 = temp1_1 + rdx_7
        result = data_143e1d9a0
        rdi = *(result + (sx.q(rax_18 s>> 0x10) << 3)) + sx.q(zx.d(rax_18.w) - rdx_7) * 0x18
    
    *(rdi + 8) |= 0x40000000

return result
