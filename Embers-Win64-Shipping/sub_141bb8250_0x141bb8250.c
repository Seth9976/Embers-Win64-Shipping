// 函数: sub_141bb8250
// 地址: 0x141bb8250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = arg2
int64_t result

if (arg2 != 0)
    result = sub_141c122a0()
    
    if (result != 0)
        int64_t rdx = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s<= *(rbx + 0x38) && *(*(rbx + 0x30) + (result << 3)) == rdx)
            void* rdi_1 = *(arg1 + 0x20)
            
            if (rdi_1 != 0)
                void* rax = sub_141c243c0()
                void* rdx_1 = *(rdi_1 + 0x10)
                result = sx.q(*(rax + 0x38))
                
                if (result.d s<= *(rdx_1 + 0x38)
                        && *(*(rdx_1 + 0x30) + (result << 3)) == rax + 0x30)
                    void* rdi_2 = *(rdi_1 + 0x20)
                    
                    if (rdi_2 != 0)
                        void* rax_1 = sub_141c122a0()
                        void* rdi_3 = *(rdi_2 + 0x10)
                        result = sx.q(*(rax_1 + 0x38))
                        
                        if (result.d s<= *(rdi_3 + 0x38)
                                && *(*(rdi_3 + 0x30) + (result << 3)) == rax_1 + 0x30)
                            result = sub_141c122a0()
                            
                            if (result == 0)
                                rbx = nullptr
                            else
                                int64_t rdx_3 = result + 0x30
                                result = sx.q(*(result + 0x38))
                                
                                if (result.d s> *(rbx + 0x38))
                                    rbx = nullptr
                                else if (*(*(rbx + 0x30) + (result << 3)) != rdx_3)
                                    rbx = nullptr
                            
                            if (rdi_3 != 0)
                                result = sx.q(*(rdi_3 + 0x38))
                                
                                if (result.d s<= *(rbx + 0x38)
                                        && *(*(rbx + 0x30) + (result << 3)) == rdi_3 + 0x30)
                                    result.b = 0
                                    return result

result.b = 1
return result
