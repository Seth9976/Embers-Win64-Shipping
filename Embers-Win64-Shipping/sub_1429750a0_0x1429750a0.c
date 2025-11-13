// 函数: sub_1429750a0
// 地址: 0x1429750a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = arg3
int64_t* arg_8 = arg1
__chkstk(0xc8)
int64_t rdi = arg1[7]
int64_t* r10 = arg2 + 0x10
int64_t* var_70 = r10
int64_t result
int64_t i

do
    int64_t rax_1 = arg1[3]
    int64_t rbx_1 = *arg1
    int64_t r9_1 = arg1[2]
    int64_t r11_2 = r10[-2] ^ rbx_1
    int64_t r15_2 = rax_1 ^ r10[1]
    int64_t r14_2 = *r10 ^ r9_1
    char var_90_1 = rax_1.b
    int64_t var_f0_1 = rax_1
    int64_t rax_2 = arg1[4]
    char var_88_1 = rax_2.b
    int64_t r12_2 = rax_2 ^ r10[2]
    int64_t var_e8_1 = rax_2
    int64_t rax_3 = arg1[5]
    char var_80_1 = rax_3.b
    int64_t r13_2 = rax_3 ^ r10[3]
    int64_t var_e0_1 = rax_3
    int64_t rax_4 = arg1[6]
    char var_78_1 = rax_4.b
    int64_t var_d8_1 = rax_4
    int64_t arg_10 = r11_2
    int64_t r11_3 = arg1[1]
    int64_t rcx_1 = rax_4 ^ r10[4]
    int64_t rsi_2 = r11_3 ^ r10[-1]
    int64_t rax_6 = rdi ^ r10[5]
    int64_t arg_20 = rax_6
    int64_t r10_1 = rax_6
    int64_t var_108_1 = rbx_1
    int64_t var_100_1 = r11_3
    int64_t var_f8_1 = r9_1
    int64_t var_d0_1 = rdi
    void* const var_98_1 = &data_1435518f0
    int64_t var_b0_2
    int64_t var_a8_2
    int64_t var_a0_2
    int64_t rax_215
    bool cond:0_1
    
    do
        int64_t rdi_6 = *(&data_1435508f0 + (zx.q(zx.d(rdi.b) * 2) << 3))
            ^ *((zx.q(zx.d(var_108_1:7.b) * 2) << 3) + 0x1435508f1)
            ^ *((zx.q(zx.d(var_100_1:6.b) * 2) << 3) + 0x1435508f2)
            ^ *((zx.q(zx.d(var_f8_1:5.b) * 2) << 3) + 0x1435508f3)
            ^ *((zx.q(zx.d(var_f0_1:4.b) * 2) << 3) + 0x1435508f4)
            ^ *((zx.q(zx.d(var_e8_1:3.b) * 2) << 3) + 0x1435508f5)
        rdi = rdi_6 ^ *((zx.q(zx.d(var_e0_1:2.b) * 2) << 3) + 0x1435508f6)
            ^ *((zx.q(zx.d(var_d8_1:1.b) * 2) << 3) + 0x1435508f7)
        int64_t rbx_7 = *(&data_1435508f0 + (zx.q(zx.d(rbx_1.b) * 2) << 3))
            ^ *((zx.q(zx.d(var_100_1:7.b) * 2) << 3) + 0x1435508f1)
            ^ *((zx.q(zx.d(var_f8_1:6.b) * 2) << 3) + 0x1435508f2)
            ^ *((zx.q(zx.d(var_f0_1:5.b) * 2) << 3) + 0x1435508f3)
            ^ *((zx.q(zx.d(var_e8_1:4.b) * 2) << 3) + 0x1435508f4)
            ^ *((zx.q(zx.d(var_e0_1:3.b) * 2) << 3) + 0x1435508f5)
        rbx_1 = rbx_7 ^ *((zx.q(zx.d(var_d8_1:2.b) * 2) << 3) + 0x1435508f6)
            ^ *((zx.q(zx.d(var_d0_1:1.b) * 2) << 3) + 0x1435508f7) ^ *var_98_1
        int64_t r11_9 = *(&data_1435508f0 + (zx.q(zx.d(r11_3.b) * 2) << 3))
            ^ *((zx.q(zx.d(var_f8_1:7.b) * 2) << 3) + 0x1435508f1)
            ^ *((zx.q(zx.d(var_108_1:1.b) * 2) << 3) + 0x1435508f7)
            ^ *((zx.q(zx.d(var_f0_1:6.b) * 2) << 3) + 0x1435508f2)
            ^ *((zx.q(zx.d(var_e8_1:5.b) * 2) << 3) + 0x1435508f3)
            ^ *((zx.q(zx.d(var_e0_1:4.b) * 2) << 3) + 0x1435508f4)
        r11_3 = r11_9 ^ *((zx.q(zx.d(var_d8_1:3.b) * 2) << 3) + 0x1435508f5)
            ^ *((zx.q(zx.d(var_d0_1:2.b) * 2) << 3) + 0x1435508f6)
        int64_t r9_7 = *(&data_1435508f0 + (zx.q(zx.d(r9_1.b) * 2) << 3))
            ^ *((zx.q(zx.d(var_108_1:2.b) * 2) << 3) + 0x1435508f6)
            ^ *((zx.q(zx.d(var_f0_1:7.b) * 2) << 3) + 0x1435508f1)
            ^ *((zx.q(zx.d(var_100_1:1.b) * 2) << 3) + 0x1435508f7)
            ^ *((zx.q(zx.d(var_e8_1:6.b) * 2) << 3) + 0x1435508f2)
            ^ *((zx.q(zx.d(var_e0_1:5.b) * 2) << 3) + 0x1435508f3)
        int64_t r9_9 = r9_7 ^ *((zx.q(zx.d(var_d8_1:4.b) * 2) << 3) + 0x1435508f4)
            ^ *((zx.q(zx.d(var_d0_1:3.b) * 2) << 3) + 0x1435508f5)
        int64_t r8_10 = *(&data_1435508f0 + (zx.q(zx.d(var_90_1) * 2) << 3))
            ^ *((zx.q(zx.d(var_108_1:3.b) * 2) << 3) + 0x1435508f5)
            ^ *((zx.q(zx.d(var_100_1:2.b) * 2) << 3) + 0x1435508f6)
            ^ *((zx.q(zx.d(var_e8_1:7.b) * 2) << 3) + 0x1435508f1)
            ^ *((zx.q(zx.d(var_f8_1:1.b) * 2) << 3) + 0x1435508f7)
            ^ *((zx.q(zx.d(var_e0_1:6.b) * 2) << 3) + 0x1435508f2)
        int64_t r8_12 = r8_10 ^ *((zx.q(zx.d(var_d8_1:5.b) * 2) << 3) + 0x1435508f3)
            ^ *((zx.q(zx.d(var_d0_1:4.b) * 2) << 3) + 0x1435508f4)
        int64_t r8_19 = *(&data_1435508f0 + (zx.q(zx.d(var_88_1) * 2) << 3))
            ^ *((zx.q(zx.d(var_108_1:4.b) * 2) << 3) + 0x1435508f4)
            ^ *((zx.q(zx.d(var_100_1:3.b) * 2) << 3) + 0x1435508f5)
            ^ *((zx.q(zx.d(var_f8_1:2.b) * 2) << 3) + 0x1435508f6)
            ^ *((zx.q(zx.d(var_e0_1:7.b) * 2) << 3) + 0x1435508f1)
            ^ *((zx.q(zx.d(var_f0_1:1.b) * 2) << 3) + 0x1435508f7)
        int64_t r8_21 = r8_19 ^ *((zx.q(zx.d(var_d8_1:6.b) * 2) << 3) + 0x1435508f2)
            ^ *((zx.q(zx.d(var_d0_1:5.b) * 2) << 3) + 0x1435508f3)
        int64_t r8_28 = *(&data_1435508f0 + (zx.q(zx.d(var_80_1) * 2) << 3))
            ^ *((zx.q(zx.d(var_108_1:5.b) * 2) << 3) + 0x1435508f3)
            ^ *((zx.q(zx.d(var_100_1:4.b) * 2) << 3) + 0x1435508f4)
            ^ *((zx.q(zx.d(var_f8_1:3.b) * 2) << 3) + 0x1435508f5)
            ^ *((zx.q(zx.d(var_f0_1:2.b) * 2) << 3) + 0x1435508f6)
            ^ *((zx.q(zx.d(var_d8_1:7.b) * 2) << 3) + 0x1435508f1)
        int64_t r8_30 = r8_28 ^ *((zx.q(zx.d(var_e8_1:1.b) * 2) << 3) + 0x1435508f7)
            ^ *((zx.q(zx.d(var_d0_1:6.b) * 2) << 3) + 0x1435508f2)
        uint32_t rax_89 = zx.d(var_108_1:6.b)
        var_108_1 = rbx_1
        uint32_t rax_90 = zx.d(var_100_1:5.b)
        var_100_1 = r11_3
        int64_t r8_37 = *(&data_1435508f0 + (zx.q(zx.d(var_78_1) * 2) << 3))
            ^ *((zx.q(rax_89 * 2) << 3) + 0x1435508f2) ^ *((zx.q(rax_90 * 2) << 3) + 0x1435508f3)
            ^ *((zx.q(zx.d(var_f8_1:4.b) * 2) << 3) + 0x1435508f4)
            ^ *((zx.q(zx.d(var_f0_1:3.b) * 2) << 3) + 0x1435508f5)
            ^ *((zx.q(zx.d(var_e8_1:2.b) * 2) << 3) + 0x1435508f6)
        int64_t r8_39 = r8_37 ^ *((zx.q(zx.d(var_d0_1:7.b) * 2) << 3) + 0x1435508f1)
            ^ *((zx.q(zx.d(var_e0_1:1.b) * 2) << 3) + 0x1435508f7)
        var_f8_1 = r9_9
        var_90_1 = r8_12.b
        var_f0_1 = r8_12
        var_88_1 = r8_21.b
        var_e8_1 = r8_21
        var_80_1 = r8_30.b
        var_e0_1 = r8_30
        var_78_1 = r8_39.b
        var_d8_1 = r8_39
        var_d0_1 = rdi
        int64_t r9_15 = *((zx.q(zx.d((rcx_1 u>> 8).b) * 2) << 3) + 0x1435508f7)
            ^ *((zx.q(zx.d((r13_2 u>> 0x10).b) * 2) << 3) + 0x1435508f6)
            ^ *((zx.q(zx.d((r12_2 u>> 0x18).b) * 2) << 3) + 0x1435508f5)
            ^ *((zx.q(zx.d((r15_2 u>> 0x20).b) * 2) << 3) + 0x1435508f4)
            ^ *((zx.q(zx.d((r14_2 u>> 0x28).b) * 2) << 3) + 0x1435508f3)
            ^ *((zx.q(zx.d((rsi_2 u>> 0x30).b) * 2) << 3) + 0x1435508f2)
        var_a0_2 = rdi ^ r9_15 ^ *((zx.q((arg_10 u>> 0x38).d * 2) << 3) + 0x1435508f1)
            ^ *(&data_1435508f0 + (zx.q(zx.d(r10_1.b) * 2) << 3))
        int64_t r9_23 = *((zx.q(zx.d((r10_1 u>> 0x10).b) * 2) << 3) + 0x1435508f6)
            ^ *((zx.q(zx.d((rcx_1 u>> 0x18).b) * 2) << 3) + 0x1435508f5)
            ^ *((zx.q(zx.d((r13_2 u>> 0x20).b) * 2) << 3) + 0x1435508f4)
            ^ *((zx.q(zx.d((r12_2 u>> 0x28).b) * 2) << 3) + 0x1435508f3)
            ^ *((zx.q(zx.d((r15_2 u>> 0x30).b) * 2) << 3) + 0x1435508f2)
            ^ *((zx.q((r14_2 u>> 0x38).d * 2) << 3) + 0x1435508f1)
        var_a8_2 = r11_3 ^ r9_23 ^ *((zx.q(zx.d((arg_10 u>> 8).b) * 2) << 3) + 0x1435508f7)
            ^ *(&data_1435508f0 + (zx.q(zx.d(rsi_2.b) * 2) << 3))
        int64_t r9_31 = *((zx.q(zx.d((r10_1 u>> 0x18).b) * 2) << 3) + 0x1435508f5)
            ^ *((zx.q(zx.d((rcx_1 u>> 0x20).b) * 2) << 3) + 0x1435508f4)
            ^ *((zx.q(zx.d((r13_2 u>> 0x28).b) * 2) << 3) + 0x1435508f3)
            ^ *((zx.q(zx.d((r12_2 u>> 0x30).b) * 2) << 3) + 0x1435508f2)
            ^ *((zx.q((r15_2 u>> 0x38).d * 2) << 3) + 0x1435508f1)
            ^ *((zx.q(zx.d((rsi_2 u>> 8).b) * 2) << 3) + 0x1435508f7)
        int64_t r9_39 = *((zx.q(zx.d((r10_1 u>> 0x20).b) * 2) << 3) + 0x1435508f4)
            ^ *((zx.q(zx.d((rcx_1 u>> 0x28).b) * 2) << 3) + 0x1435508f3)
            ^ *((zx.q(zx.d((r13_2 u>> 0x30).b) * 2) << 3) + 0x1435508f2)
            ^ *((zx.q((r12_2 u>> 0x38).d * 2) << 3) + 0x1435508f1)
            ^ *((zx.q(zx.d((r14_2 u>> 8).b) * 2) << 3) + 0x1435508f7)
            ^ *((zx.q(zx.d((rsi_2 u>> 0x10).b) * 2) << 3) + 0x1435508f6)
        int64_t r9_47 = *((zx.q(zx.d((r10_1 u>> 0x28).b) * 2) << 3) + 0x1435508f3)
            ^ *((zx.q(zx.d((rcx_1 u>> 0x30).b) * 2) << 3) + 0x1435508f2)
            ^ *((zx.q((r13_2 u>> 0x38).d * 2) << 3) + 0x1435508f1)
            ^ *((zx.q(zx.d((r15_2 u>> 8).b) * 2) << 3) + 0x1435508f7)
            ^ *((zx.q(zx.d((r14_2 u>> 0x10).b) * 2) << 3) + 0x1435508f6)
            ^ *((zx.q(zx.d((rsi_2 u>> 0x18).b) * 2) << 3) + 0x1435508f5)
        int64_t r9_55 = *((zx.q(zx.d((r10_1 u>> 0x30).b) * 2) << 3) + 0x1435508f2)
            ^ *((zx.q((rcx_1 u>> 0x38).d * 2) << 3) + 0x1435508f1)
            ^ *((zx.q(zx.d((r12_2 u>> 8).b) * 2) << 3) + 0x1435508f7)
            ^ *((zx.q(zx.d((r15_2 u>> 0x10).b) * 2) << 3) + 0x1435508f6)
            ^ *((zx.q(zx.d((r14_2 u>> 0x18).b) * 2) << 3) + 0x1435508f5)
            ^ *((zx.q(zx.d((rsi_2 u>> 0x20).b) * 2) << 3) + 0x1435508f4)
        int64_t r9_63 = *((zx.q((r10_1 u>> 0x38).d * 2) << 3) + 0x1435508f1)
            ^ *((zx.q(zx.d((r13_2 u>> 8).b) * 2) << 3) + 0x1435508f7)
            ^ *((zx.q(zx.d((r12_2 u>> 0x10).b) * 2) << 3) + 0x1435508f6)
            ^ *((zx.q(zx.d((r15_2 u>> 0x18).b) * 2) << 3) + 0x1435508f5)
            ^ *((zx.q(zx.d((r14_2 u>> 0x20).b) * 2) << 3) + 0x1435508f4)
            ^ *((zx.q(zx.d((rsi_2 u>> 0x28).b) * 2) << 3) + 0x1435508f3)
        var_b0_2 = r8_39 ^ r9_63 ^ *((zx.q(zx.d((arg_10 u>> 0x30).b) * 2) << 3) + 0x1435508f2)
            ^ *(&data_1435508f0 + (zx.q(zx.d(rcx_1.b) * 2) << 3))
        int64_t r9_71 = *((zx.q(zx.d((r10_1 u>> 8).b) * 2) << 3) + 0x1435508f7)
            ^ *((zx.q(zx.d((rcx_1 u>> 0x10).b) * 2) << 3) + 0x1435508f6)
            ^ *((zx.q(zx.d((r13_2 u>> 0x18).b) * 2) << 3) + 0x1435508f5)
            ^ *((zx.q(zx.d((r12_2 u>> 0x20).b) * 2) << 3) + 0x1435508f4)
            ^ *((zx.q(zx.d((r15_2 u>> 0x28).b) * 2) << 3) + 0x1435508f3)
            ^ *((zx.q(zx.d((r14_2 u>> 0x30).b) * 2) << 3) + 0x1435508f2)
        rax_215 = r9_71 ^ *((zx.q((rsi_2 u>> 0x38).d * 2) << 3) + 0x1435508f1)
            ^ *(&data_1435508f0 + (zx.q(zx.d(arg_10.b) * 2) << 3)) ^ rbx_1
        rsi_2 = var_a8_2
        cond:0_1 = var_98_1 + 8 s< "crypto\pkcs12\p12_add.c"
        r10_1 = var_a0_2
        r14_2 = r9_9 ^ r9_31 ^ *((zx.q(zx.d((arg_10 u>> 0x10).b) * 2) << 3) + 0x1435508f6)
            ^ *(&data_1435508f0 + (zx.q(zx.d(r14_2.b) * 2) << 3))
        r15_2 = r8_12 ^ r9_39 ^ *((zx.q(zx.d((arg_10 u>> 0x18).b) * 2) << 3) + 0x1435508f5)
            ^ *(&data_1435508f0 + (zx.q(zx.d(r15_2.b) * 2) << 3))
        r12_2 = r8_21 ^ r9_47 ^ *((zx.q(zx.d((arg_10 u>> 0x20).b) * 2) << 3) + 0x1435508f4)
            ^ *(&data_1435508f0 + (zx.q(zx.d(r12_2.b) * 2) << 3))
        r13_2 = r8_30 ^ r9_55 ^ *((zx.q(zx.d((arg_10 u>> 0x28).b) * 2) << 3) + 0x1435508f3)
            ^ *(&data_1435508f0 + (zx.q(zx.d(r13_2.b) * 2) << 3))
        rcx_1 = var_b0_2
        var_98_1 += 8
        r9_1 = r9_9
        arg_10 = rax_215
    while (cond:0_1)
    arg1 = arg_8
    *arg1 = r11_2 ^ rax_215
    arg1[1] ^= var_70[-1] ^ var_a8_2
    arg1[2] = *var_70 ^ arg1[2] ^ r14_2
    arg1[3] ^= var_70[1] ^ r15_2
    arg1[4] = arg1[4] ^ var_70[2] ^ r12_2
    arg1[5] ^= var_70[3] ^ r13_2
    arg1[6] = arg1[6] ^ var_70[4] ^ var_b0_2
    r10 = &var_70[8]
    result = var_70[5] ^ var_a0_2
    var_70 = r10
    arg1[7] ^= result
    i = i_1
    i_1 -= 1
    rdi = arg1[7]
while (i != 1)
return result
