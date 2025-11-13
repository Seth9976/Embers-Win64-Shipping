// 函数: sub_14186a150
// 地址: 0x14186a150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a464c0()
int16_t* const r8

if (arg1[2].d == 0)
    r8 = &data_142d40450
else
    r8 = arg1[1]

void arg_8

if (*(*(data_14399ea08 + 0xd0))(&data_14399ea08, &arg_8, r8) s< *(*arg1 + 0x18))
    sub_141828360(*(*arg1 + 0x318), 1)
    *arg2 = 0
    arg2[1] = 0
    return arg2

void*** rax_3 = j_sub_140a82f30(0x2b8)
void*** rdi

if (rax_3 == 0)
    rdi = nullptr
else
    rdi = sub_14181e1b0(rax_3)

void*** rax_5 = j_sub_140a82f30(0x18)

if (rax_5 == 0)
    rax_5 = nullptr
else
    rax_5[1].d = 1
    *rax_5 = &data_142d42ea8
    *(rax_5 + 0xc) = 1
    rax_5[2] = rdi

char rax_7 = (*rdi)[0x27](rdi, &arg1[1], rdi)
void* rcx_5 = *arg1

if (rax_7 == 0)
    sub_141828360(*(rcx_5 + 0x318), 1)
    *arg2 = 0
    arg2[1] = 0
label_14186a297:
    
    if (rax_5 != 0)
        rax_5[1].d -= 1
        
        if (rax_5[1].d == 1)
            (**rax_5)(rax_5)
            int32_t rbx_1 = *(rax_5 + 0xc)
            *(rax_5 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*rax_5)[1](rax_5, zx.q(rbx_1))
else
    sub_141828360(*(rcx_5 + 0x310), 1)
    *arg2 = rdi
    arg2[1] = rax_5
    
    if (rax_5 != 0)
        rax_5[1].d += 1
        goto label_14186a297

return arg2
