// 函数: sub_1420b5f90
// 地址: 0x1420b5f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = arg2
void* const rdi = arg1
int64_t result

if (arg2 != 0)
    result = sub_140d41340()
    
    if (result != 0)
        int64_t rdx = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s<= *(rbx + 0x38) && *(*(rbx + 0x30) + (result << 3)) == rdx && rdi != 0)
            result = sub_140d41340()
            
            if (result != 0)
                int64_t rdx_1 = result + 0x30
                result = sx.q(*(result + 0x38))
                
                if (result.d s<= *(rdi + 0x38) && *(*(rdi + 0x30) + (result << 3)) == rdx_1)
                    void* rax = sub_140d41340()
                    int64_t rax_1
                    
                    if (rax != 0)
                        rax_1 = sx.q(*(rax + 0x38))
                    
                    if (rax == 0 || rax_1.d s> *(rbx + 0x38)
                            || *(*(rbx + 0x30) + (rax_1 << 3)) != rax + 0x30)
                        rbx = nullptr
                    
                    result = sub_140d41340()
                    
                    if (result == 0)
                        rdi = nullptr
                    else
                        int64_t rdx_3 = result + 0x30
                        result = sx.q(*(result + 0x38))
                        
                        if (result.d s> *(rdi + 0x38))
                            rdi = nullptr
                        else if (*(*(rdi + 0x30) + (result << 3)) != rdx_3)
                            rdi = nullptr
                    
                    if (rbx != 0)
                        result = sx.q(*(rbx + 0x38))
                        
                        if (result.d s<= *(rdi + 0x38)
                                && *(*(rdi + 0x30) + (result << 3)) == rbx + 0x30)
                            result.b = 1
                            return result

result.b = 0
return result
