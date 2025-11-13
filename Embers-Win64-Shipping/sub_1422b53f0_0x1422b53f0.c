// 函数: sub_1422b53f0
// 地址: 0x1422b53f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d s> 0)
    void* rax_1 = arg1[2]
    int64_t rbx_1 = *arg1
    int64_t* i = *(rax_1 + 0x28)
    
    for (void* rbp_3 = &i[sx.q(*(rax_1 + 0x30)) * 6]; i != rbp_3; i = &i[6])
        if (i[2].d == 0)
            int64_t* rcx = *i
            int64_t rax
            rax.b = not.b((rcx[8] u>> 0x24).b)
            
            if ((rax.b & 1) != 0)
                (*(*rcx + 0xe8))(rcx, sx.q(i[3].d) + rbx_1)
    
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) != 0)
        sub_14085a880(arg1, 0)

int64_t* rbx_2 = arg1[3]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t rcx_4 = *arg1

if (rcx_4 == 0)
    return 

return sub_140a74f90(rcx_4) __tailcall
