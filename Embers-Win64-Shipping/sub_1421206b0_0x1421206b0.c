// 函数: sub_1421206b0
// 地址: 0x1421206b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* i = *(arg2 + 0xe0)
int64_t var_48
char var_40
char var_3c

for (void* rdi_1 = i + sx.q(*(arg2 + 0xe8)) * 0x24; i != rdi_1; i += 0x24)
    int512_t zmm2
    zmm2.o = i[2].d
    var_48 = *i
    var_40 = 2
    var_3c = -1
    sub_142131bb0(arg1, &var_48)

int64_t* rbx_1 = *(arg2 + 0xf0)
void* r14_3 = &rbx_1[sx.q(*(arg2 + 0xf8)) * 6]
int128_t var_58

if (rbx_1 != r14_3)
    int128_t* rdi_2 = &rbx_1[2]
    
    do
        int128_t zmm0 = *rdi_2
        var_48 = *rbx_1
        var_58 = zmm0
        var_40 = 2
        var_3c = -1
        sub_142132210(arg1, &var_48, &var_58)
        rbx_1 = &rbx_1[6]
        rdi_2 = &rdi_2[3]
    while (rbx_1 != r14_3)

void* i_1 = *(arg2 + 0x100)

for (void* rdi_3 = i_1 + sx.q(*(arg2 + 0x108)) * 0x28; i_1 != rdi_3; i_1 += 0x28)
    sub_142131d00(arg1, *i_1, *(i_1 + 0x10))

int64_t* i_2 = *(arg2 + 0x120)

for (void* r12_3 = &i_2[sx.q(*(arg2 + 0x128)) * 6]; i_2 != r12_3; i_2 = &i_2[6])
    int64_t rsi_2 = i_2[2]
    var_58.q = *i_2
    int32_t rax_7 = i_2[3].d
    var_58:8.b = 2
    var_58:0xc.d = 0xffffffff
    sub_140b4c620(&var_48, &var_58)
    int32_t rdi_4 = 0
    int32_t rbx_2 = *(arg1 + 0x128)
    var_40.d = var_58:0xc.d
    char rax_9 = var_58:8.b
    int64_t rax
    int128_t* rbx_4
    
    if (rbx_2 s<= 0)
    label_142120881:
        *(arg1 + 0x128) = rbx_2 + 1
        
        if (rbx_2 + 1 s> *(arg1 + 0x12c))
            sub_1405c4f50(arg1 + 0x120)
        
        int64_t rbx_6 = sx.q(rbx_2) * 0x30
        rbx_4 = rbx_6 + *(arg1 + 0x120)
        
        if (rbx_6 == neg.q(*(arg1 + 0x120)))
            rbx_4 = nullptr
        else
            *rbx_4 = 0
            *(rbx_4 + 8) = 2
            *(rbx_4 + 0xc) = 0xffffffff
            __builtin_memset(&rbx_4[1], 0, 0x1c)
            int64_t arg_20 = 0
        
        rax = zx.q(rax_7)
        *rbx_4 = var_58
        *(rbx_4 + 0x24) = 0
        *(rbx_4 + 0x1c) = 0
        goto label_142120901
    
    int64_t rsi_3 = 0
    
    while (true)
        rbx_4 = *(arg1 + 0x120) + rsi_3
        void var_68
        
        if (*sub_140b4c620(&var_68, rbx_4) == var_48 && *(rbx_4 + 0xc) == var_40.d
                && *(rbx_4 + 8) == rax_9)
            break
        
        rbx_2 = *(arg1 + 0x128)
        rdi_4 += 1
        rsi_3 += 0x30
        
        if (rdi_4 s>= rbx_2)
            goto label_142120881
    
    rax = zx.q(rax_7)
    
    if (rbx_4[1].q != rsi_2 || *(rbx_4 + 0x18) != rax.d)
    label_142120901:
        rbx_4[1].q = rsi_2
        *(rbx_4 + 0x18) = rax.d
        sub_142118140(arg1, rbx_4)
        int64_t* rcx_9 = *(arg1 + 0x140)
        
        if (rcx_9 != 0)
            sub_14211ef90(rcx_9, 0)
