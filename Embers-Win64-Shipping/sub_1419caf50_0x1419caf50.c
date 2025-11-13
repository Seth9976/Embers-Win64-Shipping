// 函数: sub_1419caf50
// 地址: 0x1419caf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = data_143f1d988

if (rdi == 0)
    int64_t rax
    rax.b = 0
    return rax

AcquireSRWLockShared(&rdi[4])
ReleaseSRWLockShared(&rdi[4])
int64_t* rbx = *rdi
void* rdi_1 = &rbx[sx.q(rdi[1].d)]
int64_t rax_5

if (rbx == rdi_1)
label_1419cafbd:
    rax_5 = 0
else
    while (true)
        int64_t* rcx_2 = **rbx
        
        if ((*(*rcx_2 + 0x38))(rcx_2, arg1) != 0xffffffff)
            rax_5 = *rbx
            break
        
        rbx = &rbx[1]
        
        if (rbx == rdi_1)
            goto label_1419cafbd

rax_5.b = rax_5 != 0
return rax_5
