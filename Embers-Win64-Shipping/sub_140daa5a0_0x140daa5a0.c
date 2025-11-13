// 函数: sub_140daa5a0
// 地址: 0x140daa5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = arg1[3]
int32_t r8_17

if (r9 == 0)
    int32_t rax_30 = arg1[1].d
    int16_t* rdx_18
    
    if (rax_30 == 0)
        rdx_18 = &data_142d40450
    else
        rdx_18 = *arg1
    
    int32_t rcx_10 = rax_30 - 1
    
    if (rax_30 == 0)
        rcx_10 = 0
    
    int32_t rax_31 = sub_1405969c0(rcx_10, rdx_18)
    uint32_t r10_1 = zx.d(arg1[2].b)
    int32_t r8_20 = rax_31 u>> 0xd ^ neg.d(rax_31)
    int32_t rdx_21 = (0x9e3779b9 - r8_20 - rax_31) ^ r8_20 << 8
    int32_t r9_11 = (rax_31 - rdx_21 - r8_20) ^ rdx_21 u>> 0xd
    int32_t r8_23 = (r8_20 - rdx_21 - r9_11) ^ r9_11 u>> 0xc
    int32_t rdx_24 = (rdx_21 - r8_23 - r9_11) ^ r8_23 << 0x10
    int32_t r9_14 = (r9_11 - rdx_24 - r8_23) ^ rdx_24 u>> 5
    int32_t r8_26 = (r8_23 - rdx_24 - r9_14) ^ r9_14 u>> 3
    int32_t rdx_27 = (rdx_24 - r8_26 - r9_14) ^ r8_26 << 0xa
    int32_t r9_17 = (r9_14 - rdx_27 - r8_26) ^ rdx_27 u>> 0xf
    int32_t rcx_16 = r9_17 - r10_1
    int32_t rdx_33 = (0 - r9_17 - 0x61c88647) ^ rcx_16 << 8
    int32_t r10_4 = (r10_1 - rdx_33 - rcx_16) ^ rdx_33 u>> 0xd
    int32_t rcx_19 = (rcx_16 - rdx_33 - r10_4) ^ r10_4 u>> 0xc
    int32_t rdx_36 = (rdx_33 - rcx_19 - r10_4) ^ rcx_19 << 0x10
    uint32_t r8_27 = zx.d(*(arg1 + 0x11))
    int32_t r10_7 = (r10_4 - rdx_36 - rcx_19) ^ rdx_36 u>> 5
    int32_t rcx_22 = (rcx_19 - rdx_36 - r10_7) ^ r10_7 u>> 3
    int32_t rdx_39 = (rdx_36 - rcx_22 - r10_7) ^ rcx_22 << 0xa
    int32_t r10_10 = (r10_7 - rdx_39 - rcx_22) ^ rdx_39 u>> 0xf
    int32_t rcx_24 = r10_10 - r8_27
    int32_t rdx_45 = (0 - r10_10 - 0x61c88647) ^ rcx_24 << 8
    int32_t r8_30 = (r8_27 - rdx_45 - rcx_24) ^ rdx_45 u>> 0xd
    int32_t rcx_27 = (rcx_24 - rdx_45 - r8_30) ^ r8_30 u>> 0xc
    int32_t rdx_48 = (rdx_45 - rcx_27 - r8_30) ^ rcx_27 << 0x10
    int32_t r8_33 = (r8_30 - rdx_48 - rcx_27) ^ rdx_48 u>> 5
    int32_t rcx_30 = (rcx_27 - rdx_48 - r8_33) ^ r8_33 u>> 3
    int32_t rdx_51 = (rdx_48 - rcx_30 - r8_33) ^ rcx_30 << 0xa
    r8_17 = (r8_33 - rdx_51 - rcx_30) ^ rdx_51 u>> 0xf
else
    uint32_t r9_1 = (r9 u>> 4).d
    int32_t rdx_1 = (0x9e3779b9 - r9_1) ^ r9_1 << 8
    int32_t r8_2 = neg.d(rdx_1 + r9_1) ^ rdx_1 u>> 0xd
    int32_t r9_4 = (r9_1 - rdx_1 - r8_2) ^ r8_2 u>> 0xc
    int32_t rdx_4 = (rdx_1 - r9_4 - r8_2) ^ r9_4 << 0x10
    int32_t r8_5 = (r8_2 - rdx_4 - r9_4) ^ rdx_4 u>> 5
    int32_t r9_7 = (r9_4 - rdx_4 - r8_5) ^ r8_5 u>> 3
    int32_t rdx_7 = (rdx_4 - r9_7 - r8_5) ^ r9_7 << 0xa
    int32_t r8_8 = (r8_5 - rdx_7 - r9_7) ^ rdx_7 u>> 0xf
    int32_t rdx_11 = r8_8 u>> 0xd ^ neg.d(r8_8)
    int32_t rcx_2 = (0x9e3779b9 - rdx_11 - r8_8) ^ rdx_11 << 8
    int32_t r8_11 = (r8_8 - rcx_2 - rdx_11) ^ rcx_2 u>> 0xd
    int32_t rdx_14 = (rdx_11 - rcx_2 - r8_11) ^ r8_11 u>> 0xc
    int32_t rcx_5 = (rcx_2 - rdx_14 - r8_11) ^ rdx_14 << 0x10
    int32_t r8_14 = (r8_11 - rcx_5 - rdx_14) ^ rcx_5 u>> 5
    int32_t rdx_17 = (rdx_14 - rcx_5 - r8_14) ^ r8_14 u>> 3
    int32_t rcx_8 = (rcx_5 - rdx_17 - r8_14) ^ rdx_17 << 0xa
    r8_17 = (r8_14 - rcx_8 - rdx_17) ^ rcx_8 u>> 0xf

int32_t rdx_53 = *(arg1 + 0x14)
int32_t r8_37 = (r8_17 - rdx_53) ^ rdx_53 u>> 0xd
int32_t r11_2 = (0x9e3779b9 - r8_37 - rdx_53) ^ r8_37 << 8
int32_t rdx_56 = (rdx_53 - r11_2 - r8_37) ^ r11_2 u>> 0xd
int32_t r8_40 = (r8_37 - r11_2 - rdx_56) ^ rdx_56 u>> 0xc
int32_t r11_5 = (r11_2 - r8_40 - rdx_56) ^ r8_40 << 0x10
int32_t rdx_59 = (rdx_56 - r11_5 - r8_40) ^ r11_5 u>> 5
int32_t r8_43 = (r8_40 - r11_5 - rdx_59) ^ rdx_59 u>> 3
int32_t r11_8 = (r11_5 - r8_43 - rdx_59) ^ r8_43 << 0xa
return zx.q(rdx_59 - r11_8 - r8_43) ^ zx.q(r11_8 u>> 0xf)
