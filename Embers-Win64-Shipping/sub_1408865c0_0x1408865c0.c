// 函数: sub_1408865c0
// 地址: 0x1408865c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rdi = arg4

if ((arg1[0x1b].b & 1) != 0)
    return sub_140847d00(arg4, &arg1[0x1c]) __tailcall

int32_t rsi = 0
int64_t r13 = 0
int32_t r15 = 0
int32_t var_4c = 0
int64_t var_58 = 0
void** i = data_143f1da58

if (i != 0)
    do
        void* rax_2 = i[2]
        void* rdi_1 = nullptr
        
        if (*(rax_2 + 8) == 3)
            rdi_1 = rax_2
        
        if (rdi_1 != 0)
            int32_t var_48 = arg2
            int32_t var_44_1 = 0
            int64_t* var_40_1 = arg1
            
            if (sub_1419d8600(rdi_1, &var_48) != 0 && (*(*arg1 + 8))(arg1, zx.q(arg2), rdi_1) != 0)
                int64_t rbp_1 = sx.q(rsi)
                rsi = (rbp_1 + 1).d
                
                if (rsi s> r15)
                    sub_1405a4d70(&var_58)
                    r15 = var_4c
                    r13 = var_58
                
                *(r13 + (rbp_1 << 3)) = rdi_1
        
        i = *i
    while (i != 0)
    
    rdi = arg4

rdi[1].d = arg1[0x1a].d
*(rdi + 0x68) = arg1[0x10].b
void* result = sub_1406ee030(&arg1[0x11], rdi + 0x38)
*rdi = data_14396e7b0
int32_t rdx_6 = arg1[0x16].d

if (rdx_6 s> *(rdi + 0x5c))
    result = sub_140888c80(&rdi[5], rdx_6)

int64_t* rsi_1 = arg1[0x15]
void* rbp_4 = &rsi_1[sx.q(arg1[0x16].d) * 2]

if (rsi_1 != rbp_4)
    do
        int64_t rdi_2 = sx.q(*(rdi + 0x58))
        int32_t rax_8 = (rdi_2 + 1).d
        *(rdi + 0x58) = rax_8
        
        if (rax_8 s> *(rdi + 0x5c))
            sub_1408889d0(&rdi[5], rdi_2.d)
        
        void* rdx_9 = rdi[5].q
        
        if ((rdx_9.b & 1) != 0)
            rdx_9 = (rdx_9 s>> 1) + &rdi[5]
        
        void* rdx_10 = rdx_9 + rdi_2 * 0x14
        __builtin_memset(rdx_10, 0, 0x14)
        result = sub_1406ee030(rsi_1, rdx_10)
        rsi_1 = &rsi_1[2]
    while (rsi_1 != rbp_4)
    
    rdi = arg4

void* rbx_1 = *(rdi + 0x28)
int32_t rbp_5 = arg1[0xf].d

if ((rbx_1.b & 1) != 0)
    rbx_1 = (rbx_1 s>> 1) + rdi + 0x28

int32_t i_3 = rdi[3].d

if (i_3 != 0)
    int32_t i_1
    
    do
        result = sub_140a1d5c0(rbx_1)
        rbx_1 += 0x10
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

rdi[3].d = 0

if (*(rdi + 0x34) != rbp_5)
    result = sub_140888c10(rdi + 0x28, rbp_5)

int64_t* i_2 = arg1[0xe]

for (void* r14_3 = &i_2[sx.q(arg1[0xf].d) * 2]; i_2 != r14_3; i_2 = &i_2[2])
    int64_t rbx_3 = sx.q(rdi[3].d)
    int32_t rax_9 = (rbx_3 + 1).d
    rdi[3].d = rax_9
    
    if (rax_9 s> *(rdi + 0x34))
        sub_140888950(rdi + 0x28, rbx_3.d)
    
    result = *(rdi + 0x28)
    
    if ((result.b & 1) != 0)
        result = (result s>> 1) + rdi + 0x28
    
    void* rbx_5 = (rbx_3 << 4) + result
    *rbx_5 = 0
    int32_t rbp_6 = i_2[1].d
    int64_t r15_1 = *i_2
    *(rbx_5 + 8) = rbp_6
    
    if (rbp_6 != 0)
        sub_1405e3e80(rbx_5, rbp_6, 0)
        void* rcx_14 = *rbx_5
        
        if ((rcx_14.b & 1) != 0)
            rcx_14 = (rcx_14 s>> 1) + rbx_5
        
        result = memcpy(rcx_14, r15_1, rbp_6 * 2)
    else
        *(rbx_5 + 0xc) = 0

if (arg3 == 0)
    sub_140b51560(&arg4[6])

if (r13 == 0)
    return result

return sub_140a74f90(r13)
