// 函数: sub_141ef14c0
// 地址: 0x141ef14c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xc)
void* const rax_6

if (rax s>= data_143e1d9b4)
    rax_6 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_1
    rax_6 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18

uint64_t result = zx.q(*(rax_6 + 8) u>> 0x1d)

if ((result.b & 1) == 0 && (arg1[0x11].b & 1) == 0 && arg2 != 0)
    void* rsi_1 = arg1[0x14]
    
    if (rsi_1 != 0)
        result = *(rsi_1 + 0x10)
    
    if (rsi_1 == 0 || *(result + 0xcc) s>= 0)
        if ((*(arg1 + 0x8a) & 0x40) == 0)
            (*(*arg1 + 0x3a8))(arg1)
        
        arg1[0x15] = arg2
        sub_141ee0740(arg1, arg3)
        
        if (sub_14243ade0(arg2) == 0)
            sub_141ef1330(arg1, 1)
        else
            char rax_10 = *(arg1 + 0x8a)
            
            if (rsi_1 != 0)
                if (rax_10 s>= 0 && (rax_10 & 0x10) != 0 && (*(rsi_1 + 0x5b) & 0x20) != 0)
                    (*(*arg1 + 0x318))(arg1)
                
                char rcx_11 = *(rsi_1 + 0x5c)
                
                if ((rcx_11 & 0x60) == 0x40 || (rcx_11 & 0x60) == 0x20)
                    sub_141ef1330(arg1, 1)
                    
                    if ((*(arg1 + 0x8b) & 1) == 0)
                        (*(*arg1 + 0x320))(arg1)
            else
                if (rax_10 s>= 0 && (rax_10 & 0x10) != 0)
                    (*(*arg1 + 0x318))(arg1)
                
                sub_141ef1330(arg1, 1)
        
        result.b = *(arg1 + 0x8c) - 1
        result.b = result.b u<= 1
        
        if (result.b != 0)
            void** var_18 = nullptr
            int32_t result_1 = 0
            sub_140d3ccc0(arg1, &var_18, 1, 0, 0x20000000)
            void** rdi_1 = var_18
            result = sx.q(result_1)
            void* r14_1 = &rdi_1[result]
            
            if (rdi_1 != r14_1)
                do
                    void* rbx_1 = *rdi_1
                    
                    if (rbx_1 != 0)
                        void* rax_12 = sub_142459c10()
                        void* rdx_6 = *(rbx_1 + 0x10)
                        result = sx.q(*(rax_12 + 0x38))
                        
                        if (result.d s<= *(rdx_6 + 0x38))
                            uint64_t result_2 = result
                            result = *(rdx_6 + 0x30)
                            
                            if (*(result + (result_2 << 3)) == rax_12 + 0x30
                                    && (*(rbx_1 + 0x89) & 2) != 0 && (*(rbx_1 + 0x88) & 1) == 0
                                    && *(rbx_1 + 0xa0) == rsi_1)
                                result = sub_141ef14c0(rbx_1, arg2, 0)
                    
                    rdi_1 = &rdi_1[1]
                while (rdi_1 != r14_1)
                
                rdi_1 = var_18
            
            if (rdi_1 != 0)
                return sub_140a74f90(rdi_1)

return result
