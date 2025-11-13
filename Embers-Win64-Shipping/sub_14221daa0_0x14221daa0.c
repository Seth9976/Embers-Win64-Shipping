// 函数: sub_14221daa0
// 地址: 0x14221daa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = (*(*arg1 + 0x648))()
int64_t* rdi = arg1[0x4b]

if (rdi != 0)
    void* rax_1 = sub_14256a090()
    void* rdx_1 = rdi[2]
    result = sx.q(*(rax_1 + 0x38))
    
    if (result.d s<= *(rdx_1 + 0x38))
        int64_t result_1 = result
        result = *(rdx_1 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_1 + 0x30)
            result = (*(*rdi + 0x6a8))(rdi, rdx_1)
            
            if (result.b != 0)
                if (rdi[0x59].b != 0)
                    result = (*(*rdi + 0xd18))(rdi, arg1)
                
                if (arg1[0x1f] == 0)
                    result = (*(*arg1 + 0x710))(arg1)
                    arg1[0x1f] = result
                    
                    if (result != 0)
                        int64_t r8_2 = *arg1
                        (*(r8_2 + 0x720))(arg1, result, r8_2)
                        sub_141ef1390(arg1[0x1f])
                        result = sub_1420a63a0(arg1[2])
                        
                        if (result.b != 0)
                            void* rcx_6 = arg1[0x1f]
                            *(rcx_6 + 0x134) ^= (*(arg1 + 0x5a) ^ *(rcx_6 + 0x134)) & 1
                            return sub_14207f1f0(arg1[2], arg1[0x1f])

return result
