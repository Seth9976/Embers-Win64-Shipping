// 函数: sub_142c35980
// 地址: 0x142c35980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[3].b == 0
void* r15 = *(arg2 + 8)
void* arg_20 = r15

if (cond:0 || zx.w(*(arg3 + 4)) * 0x100 + zx.w(*(arg3 + 5)) == 0xffff)
    goto label_142c35dee

uint64_t rax_2 = zx.q(*(r15 + 0x5c))

if (rax_2.d u>= *(r15 + 0x60))
    goto label_142c35dee

void* rsi_1 = *(r15 + 0x80) + rax_2 * 0x14
int32_t rcx_1 = arg1[1].d
void* arg_8 = rsi_1
uint32_t result
int32_t arg_10
int32_t rax_16

if (rcx_1 == 0)
    char* rbx_7 = arg1[2] + (((zx.q(*(arg3 + 4)) << 8) + zx.q(*(arg3 + 5))) << 1)
    result = sub_142bf7510(*arg1 + 0x20, rbx_7, 4)
    
    if (result.b != 0)
        uint32_t rax_37 = zx.d(rbx_7[2])
        uint32_t rdi_4 = zx.d(rbx_7[3])
        uint32_t r9_3 = zx.d(*rbx_7)
        uint32_t r11_1 = zx.d(rbx_7[1])
        void* r8_14 = *arg1
        arg_8.d = 0
        arg_10 = 0
        arg_20.d = 0
        int32_t var_48 = 0
        void* rbx_8 = *(r8_14 + 8)
        int32_t r14_3 = *(*(*(r8_14 + 0x18) + 0x70) + zx.q(*(arg1 + 0x1c)) * 0x14)
        arg_10 = 0
        arg_8.d = 0
        void* r10_4 = *(rbx_8 + 0x40)
        result = (*(r10_4 + 0x190))(rbx_8, *(rbx_8 + 0x48), zx.q(r14_3), zx.q((r9_3 << 8) + r11_1), 
            &arg_8, &arg_10, *(r10_4 + 0x80))
        
        if (result != 0)
            int32_t var_44
            int32_t var_40
            sub_142bf3a00(rbx_8, r14_3, &var_44, &var_40)
            void* r8_17 = *arg1
            arg_8.d -= var_44
            arg_10 -= var_40
            void* rdx_28 = *(r8_17 + 0x18)
            void* rbx_9 = *(r8_17 + 8)
            int32_t r14_4 = *(*(rdx_28 + 0x70) + zx.q(*(rdx_28 + 0x5c)) * 0x14)
            var_48 = 0
            arg_20.d = 0
            void* r10_5 = *(rbx_9 + 0x40)
            result = (*(r10_5 + 0x190))(rbx_9, *(rbx_9 + 0x48), zx.q(r14_4), 
                zx.q(rdi_4 + (rax_37 << 8)), &arg_20, &var_48, *(r10_5 + 0x80))
            
            if (result != 0)
                sub_142bf3a00(rbx_9, r14_4, &var_40, &var_44)
                int32_t rdx_32 = var_48 - var_44
                *(rsi_1 + 8) = arg_8.d - (arg_20.d - var_40)
                rax_16 = arg_10 - rdx_32
                goto label_142c35dc9
else if (rcx_1 == 1)
    char* r15_1 = arg1[2] + ((zx.q(*(arg3 + 5)) + (zx.q(*(arg3 + 4)) << 8)) << 1)
    arg_10.q = r15_1
    result = sub_142bf7510(*arg1 + 0x20, r15_1, 4)
    
    if (result.b != 0)
        void* r14_2 = *arg1
        void* rbx_4 = *(r14_2 + 0x18)
        void* rax_23 = sub_142c30da0(*(r14_2 + 0x58), 
            *(*(rbx_4 + 0x70) + zx.q(*(arg1 + 0x1c)) * 0x14), (zx.d(*r15_1) << 8) + zx.d(r15_1[1]), 
            *(r14_2 + 0x50))
        void* rax_24 = arg_10.q
        void* rax_25 = sub_142c30da0(*(r14_2 + 0x58), 
            *(*(rbx_4 + 0x70) + zx.q(*(rbx_4 + 0x5c)) * 0x14), 
            (zx.d(*(rax_24 + 2)) << 8) + zx.d(*(rax_24 + 3)), *(r14_2 + 0x50))
        int16_t r8_11 = zx.w(*rax_23) * 0x100 + zx.w(*(rax_23 + 1))
        int32_t rax_27 = sub_142c1db90(*(r14_2 + 8), zx.w(*rax_25) * 0x100 + zx.w(*(rax_25 + 1)))
        *(arg_8 + 8) = sub_142c1db90(*(*arg1 + 8), r8_11) - rax_27
        int16_t rdx_21 = zx.w(*(rax_23 + 2)) * 0x100 + zx.w(*(rax_23 + 3))
        int32_t rax_33 =
            sub_142bfd700(*(*arg1 + 8), zx.w(*(rax_25 + 2)) * 0x100 + zx.w(*(rax_25 + 3)))
        int32_t rax_34 = sub_142bfd700(*(*arg1 + 8), rdx_21)
        rsi_1 = arg_8
        rax_16 = rax_34 - rax_33
        r15 = arg_20
    label_142c35dc9:
        *(rsi_1 + 0xc) = rax_16
    label_142c35dd1:
        *(rsi_1 + 0x12) = 1
        *(rsi_1 + 0x10) = *(arg1 + 0x1c) - *(r15 + 0x5c)
        *(r15 + 0x28) |= 8
    label_142c35dee:
        result = zx.d(*(arg3 + 3))
        
        if (zx.w(*(arg3 + 2)) * 0x100 + result.w s< 0)
            arg1[3].b = 1
            result = *(r15 + 0x5c)
            *(arg1 + 0x1c) = result
else
    if (rcx_1 != 2)
        goto label_142c35dd1
    
    char* rbx_1 = arg1[2] + ((zx.q(*(arg3 + 5)) + (zx.q(*(arg3 + 4)) << 8)) << 1)
    result = sub_142bf7510(*arg1 + 0x20, rbx_1, 8)
    
    if (result.b != 0)
        int16_t rdx_2 = zx.w(*rbx_1) * 0x100 + zx.w(rbx_1[1])
        int16_t rdx_4 = zx.w(rbx_1[2]) * 0x100 + zx.w(rbx_1[3])
        int16_t r8_3 = zx.w(rbx_1[6]) * 0x100 + zx.w(rbx_1[7])
        int32_t rax_11 = sub_142c1db90(*(*arg1 + 8), zx.w(rbx_1[4]) * 0x100 + zx.w(rbx_1[5]))
        int32_t rax_12 = sub_142c1db90(*(*arg1 + 8), rdx_2)
        rsi_1 = arg_8
        *(rsi_1 + 8) = rax_12 - rax_11
        int32_t rax_14 = sub_142bfd700(*(*arg1 + 8), r8_3)
        rax_16 = sub_142bfd700(*(*arg1 + 8), rdx_4) - rax_14
        goto label_142c35dc9
return result
