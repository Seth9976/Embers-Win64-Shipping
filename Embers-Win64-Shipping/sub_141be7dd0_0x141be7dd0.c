// 函数: sub_141be7dd0
// 地址: 0x141be7dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = data_143f5b298

if (rbx == 0)
    return 

void* rax_1 = sub_1424ad0c0()
void* r10_1 = *(rbx + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(r10_1 + 0x38) || *(*(r10_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

void* rcx_1 = *(rbx + 0x788)

if (rcx_1 == 0)
    return 

int64_t* rbx_1 = *(rcx_1 + 0xf0)

if (rbx_1 == 0)
    return 

rax = zx.q(rbx_1[1].d)

if (rax.d == 0)
    return 

rbx_1[1].d = rax.d + 1
int64_t* r14_1 = *(rcx_1 + 0xe8)

if (r14_1 != 0)
    int128_t var_40
    int64_t* rdx_1
    int32_t rsi_1
    
    if (arg1 == 0)
        rdx_1 = &var_40
        var_40 = zx.o(0)
        rsi_1 = 2
    else
        rsi_1 = 1
        void var_30
        rdx_1 = sub_141bab3c0(arg1, &var_30)
    
    (*(*r14_1 + 0x60))(r14_1, rdx_1, zx.q(arg2), zx.q(arg3), arg4, arg5, 0)
    
    if ((rsi_1.b & 2) != 0)
        int64_t* rdi_1 = var_40:8.q
        rsi_1 &= 0xfffffffd
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp4_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* var_28
    
    if ((rsi_1.b & 1) != 0 && var_28 != 0)
        var_28[1].d -= 1
        
        if (var_28[1].d == 1)
            (**var_28)(var_28)
            int32_t temp5_1 = *(var_28 + 0xc)
            *(var_28 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_28 + 8))(var_28, 1)

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp1_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, 1)
