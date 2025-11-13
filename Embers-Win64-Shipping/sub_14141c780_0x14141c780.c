// 函数: sub_14141c780
// 地址: 0x14141c780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = &data_1439c82d0
void var_48
int64_t* rax = sub_14141c600(&var_48, &data_1439c82d0, data_14399e5dc)
*(*rax + 0x10) = arg2
void* rcx_2 = *rax
int32_t r8_1 = rax[2].d
int64_t* rdx = rax[1]
int64_t* rbx_1 = *(rcx_2 + 0x20)
int64_t* arg_18 = rbx_1
int32_t* r15 = &rbx_1[9]

if (rbx_1 != 0)
    *r15 += 1
    rbx_1 = arg_18

sub_14129a050(rcx_2, rdx, r8_1, 1)
void* rax_1 = data_1439c82f0
void* rdi = &data_1439c82d0
int32_t i_1 = data_1439c82f8

if (rax_1 != 0)
    rdi = rax_1

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_3 = *rdi
        
        if (rcx_3 != 0)
            rcx_3[9].d -= 1
            
            if (rcx_3[9].d == 1)
                sub_140a2f6e0(rcx_3)
        
        rdi += 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = arg_18

int32_t rcx_4 = data_1439c82fc
int32_t rdi_1 = 0
data_1439c82f8 = 0

if (rcx_4 != 0)
    sub_14085a940(&data_1439c82d0, 0)
    rcx_4 = data_1439c82fc
    rdi_1 = data_1439c82f8

data_1439c82f8 = rdi_1 + 1

if (rdi_1 + 1 s> rcx_4)
    sub_14083a490(&data_1439c82d0, rdi_1)

void* rax_4 = data_1439c82f0

if (rax_4 != 0)
    rsi = rax_4

*(rsi + (sx.q(rdi_1) << 3)) = rbx_1

if (rbx_1 != 0)
    rbx_1[9].d += 1

int64_t* rax_6 = sub_140a242a0()
int64_t r8_2 = *rax_6
int64_t* result = (*(r8_2 + 0x30))(rax_6, zx.q(data_14399e5e0), r8_2)

if (arg_18 != 0)
    int32_t rbp_1 = *r15
    *r15 -= 1
    
    if (rbp_1 == 1)
        return sub_140a2f6e0(arg_18)

return result
