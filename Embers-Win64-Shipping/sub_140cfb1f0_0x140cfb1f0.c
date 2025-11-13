// 函数: sub_140cfb1f0
// 地址: 0x140cfb1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i = arg3
int32_t rbx_1 = arg2

if ((*(*arg1 + 0x40) & 0x1040000000) != 0)
    return 

uint64_t r15_1 = zx.q(arg1[3].d)
int64_t rbp_2 = sx.q(arg1[4].d * rbx_1) + *arg1[1]
int32_t rdi_1 = rol.d(1, arg2.b)

do
    int64_t rax = arg1[1]
    
    if (rbx_1 s>= 0 && rbx_1 s< *(rax + 0x28))
        void* rcx_1 = rax + 0x10
        void* rax_4 = *(rax + 0x20)
        
        if (rax_4 != 0)
            rcx_1 = rax_4
        
        int32_t rax_5 = rbx_1
        
        if (rbx_1 s< 0)
            rax_5 = rbx_1 + 0x1f
        
        if ((*(rcx_1 + (sx.q(rax_5 s>> 5) << 2)) & rdi_1) != 0)
            int64_t* rcx_2 = *arg1
            rax.b = not.b((rcx_2[8] u>> 0x24).b)
            
            if ((rax.b & 1) != 0)
                (*(*rcx_2 + 0xe8))(rcx_2, sx.q(*(rcx_2 + 0x4c)) + rbp_2)
            
            i -= 1
    
    rbp_2 += r15_1
    rdi_1 = rol.d(rdi_1, 1)
    rbx_1 += 1
while (i != 0)
