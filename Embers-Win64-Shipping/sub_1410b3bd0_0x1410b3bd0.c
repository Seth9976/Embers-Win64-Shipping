// 函数: sub_1410b3bd0
// 地址: 0x1410b3bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = arg4
int64_t* rsi = *(arg4 + 0x5150)
char rbx = *(arg4 + 0xd74)
int32_t rdi = *(*(arg3 + 0x1c28) + 0x60)
void* var_38
sub_1419a2ec0(rsi, &var_38, &data_143e2d490, 0)
uint64_t rax_2 = zx.q(rdi) | 1

if (rbx == 0)
    rax_2 = zx.q(rdi)

void* rbx_1
void* rdi_1

if (rax_2.d u> 7)
label_1410b3d51:
    void* var_48
    sub_1419a2ec0(rsi, &var_48, &data_143e2e600, 0)
    rbx_1 = var_48
    void* var_40
    rdi_1 = var_40
else
    switch (rax_2)
        case 0
            goto label_1410b3d51
        case 1
            void* var_b8
            sub_1419a2ec0(rsi, &var_b8, &data_143e2e760, 0)
            rbx_1 = var_b8
            void* var_b0
            rdi_1 = var_b0
        case 2
            void* var_a8
            sub_1419a2ec0(rsi, &var_a8, &data_143e2e8c0, 0)
            rbx_1 = var_a8
            void* var_a0
            rdi_1 = var_a0
        case 3
            void* var_98
            sub_1419a2ec0(rsi, &var_98, &data_143e2ea20, 0)
            rbx_1 = var_98
            void* var_90
            rdi_1 = var_90
        case 4
            void* var_88
            sub_1419a2ec0(rsi, &var_88, &data_143e2eb80, 0)
            rbx_1 = var_88
            void* var_80
            rdi_1 = var_80
        case 5
            void* var_78
            sub_1419a2ec0(rsi, &var_78, &data_143e2ece0, 0)
            rbx_1 = var_78
            void* var_70
            rdi_1 = var_70
        case 6
            void* var_68
            sub_1419a2ec0(rsi, &var_68, &data_143e2ee40, 0)
            rbx_1 = var_68
            void* var_60
            rdi_1 = var_60
        case 7
            void* var_58
            sub_1419a2ec0(rsi, &var_58, &data_143e2efa0, 0)
            rbx_1 = var_58
            void* var_50
            rdi_1 = var_50

void* r14 = var_38
*arg2 = data_1439b5238
int64_t rax_4 = 0

if (r14 != 0)
    int64_t rdx_11 = sx.q(*(r14 + 0x10c))
    void* var_30
    int64_t* rsi_1 = *(var_30 + 0x10)
    int64_t r12_1 = rdx_11 << 3
    int64_t rax_6 = rsi_1[3]
    
    if (*(r12_1 + rax_6) == 0)
        sub_1419ccf30(rsi_1, rdx_11.d)
        rax_6 = rsi_1[3]
    
    rax_4 = *(r12_1 + rax_6)
    r12 = arg4

arg2[1] = rax_4
int64_t rax_7 = 0

if (rbx_1 != 0)
    int64_t* rdi_2 = *(rdi_1 + 0x10)
    int64_t rdx_12 = sx.q(*(rbx_1 + 0x10c))
    int64_t rax_8 = rdi_2[3]
    int64_t rsi_2 = rdx_12 << 3
    
    if (*(rsi_2 + rax_8) == 0)
        sub_1419ccf30(rdi_2, rdx_12.d)
        rax_8 = rdi_2[3]
    
    rax_7 = *(rsi_2 + rax_8)

arg2[4] = rax_7
arg2[0xb].d = 0
sub_1419870b0(arg1, arg2, 2)
sub_141080be0(r14, arg1, *(arg1 + 0x188), *(r12 + 0x10))
return sub_1410b5ed0(rbx_1, arg1, r12, arg5)
