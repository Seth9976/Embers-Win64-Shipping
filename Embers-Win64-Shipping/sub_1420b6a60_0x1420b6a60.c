// 函数: sub_1420b6a60
// 地址: 0x1420b6a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
sub_141eb54c0(arg1, arg2, &arg_8, arg3, nullptr)
*(arg1 + 0x13) = 1
int64_t* rax = sub_142565030()
int64_t rax_1 = rax[0x23]

if (rax_1 == 0)
    int64_t rdx = *rax
    (*(rdx + 0x390))(rax, rdx)
    rax_1 = rax[0x23]

rax_1.b = *(rax_1 + 0xaf) == 0
*(arg1 + 0x12) = rax_1.b
sub_141eb8b70(arg1, arg4)

if (arg5 != 0)
    void* rbx_1 = arg6
    
    if (rbx_1 != 0)
        void* rax_2 = sub_142452380()
        void* rdx_2 = *(rbx_1 + 0x10)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
            sub_141eb8b10(arg1, rbx_1)
        else if (rbx_1 != 0)
            while (true)
                rbx_1 = *(rbx_1 + 0x20)
                
                if (rbx_1 == 0)
                    return arg1
                
                void* rax_5 = sub_142452380()
                void* rdx_3 = *(rbx_1 + 0x10)
                int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                
                if (rax_6.d s<= *(rdx_3 + 0x38))
                    if (*(*(rdx_3 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
                        break
            
            sub_141eb8b10(arg1, rbx_1)

return arg1
