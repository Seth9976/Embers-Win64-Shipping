// 函数: sub_142394f50
// 地址: 0x142394f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int64_t rbx = *arg2
int32_t rsi = (rbx u>> 0x20).d + sub_140b5ead0(rbx.d)
int32_t rdx_2 = rsi u>> 0xd ^ neg.d(rsi)
int32_t rcx_3 = (0x9e3779b9 - rdx_2 - rsi) ^ rdx_2 << 8
int32_t rsi_3 = (rsi - rcx_3 - rdx_2) ^ rcx_3 u>> 0xd
int32_t rdx_5 = (rdx_2 - rcx_3 - rsi_3) ^ rsi_3 u>> 0xc
int32_t rcx_6 = (rcx_3 - rdx_5 - rsi_3) ^ rdx_5 << 0x10
int32_t rsi_6 = (rsi_3 - rcx_6 - rdx_5) ^ rcx_6 u>> 5
int32_t rdx_8 = (rdx_5 - rcx_6 - rsi_6) ^ rsi_6 u>> 3
int32_t rcx_9 = (rcx_6 - rdx_8 - rsi_6) ^ rdx_8 << 0xa
int32_t rax_18 = arg2[2].d
int16_t* rdx_9

if (rax_18 == 0)
    rdx_9 = &data_142d40450
else
    rdx_9 = arg2[1]

int32_t rbp = 0
int32_t rcx_11 = rax_18 - 1

if (rax_18 == 0)
    rcx_11 = 0

int32_t rax_19 = sub_1405969c0(rcx_11, rdx_9)
void* r8 = arg1[8]
void* r15 = &arg1[7]
int32_t rsi_11 = (((rsi_6 - rcx_9 - rdx_8) ^ rcx_9 u>> 0xf) - rax_19) ^ rax_19 u>> 0xd
int32_t rbx_4 = (0x9e3779b9 - rsi_11 - rax_19) ^ rsi_11 << 8
int32_t rdx_13 = (rax_19 - rbx_4 - rsi_11) ^ rbx_4 u>> 0xd
int32_t rsi_14 = (rsi_11 - rbx_4 - rdx_13) ^ rdx_13 u>> 0xc
int32_t rbx_7 = (rbx_4 - rsi_14 - rdx_13) ^ rsi_14 << 0x10
int32_t rdx_16 = (rdx_13 - rbx_7 - rsi_14) ^ rbx_7 u>> 5
int32_t rsi_17 = (rsi_14 - rbx_7 - rdx_16) ^ rdx_16 u>> 3
int32_t rbx_10 = (rbx_7 - rsi_17 - rdx_16) ^ rsi_17 << 0xa
void* rax_36 = r15
int64_t rdx_21 = (sx.q(rdx_16 - rbx_10 - rsi_17) ^ zx.q(rbx_10) u>> 0xf) & sx.q(arg1[9].d - 1)

if (r8 != 0)
    rax_36 = r8

void* rsi_18 = rax_36 + (rdx_21 << 2)
int32_t i = *(rax_36 + (rdx_21 << 2))

while (i != 0xffffffff)
    int64_t* rbx_11 = *arg1 + sx.q(i) * 0x28
    
    if (sub_140d16af0(rbx_11, arg2) != 0)
        int64_t rbx_12 = sx.q(*rsi_18)
        
        if (arg1[1].d != *(arg1 + 0x34))
            void* rdx_23 = *(r15 + 8)
            int64_t r8_1 = *arg1
            void* r9_1 = r8_1 + rbx_12 * 0x28
            int64_t rcx_21 = sx.q(arg1[9].d - 1) & sx.q(*(r9_1 + 0x24))
            
            if (rdx_23 != 0)
                r15 = rdx_23
            
            int32_t j = *(r15 + (rcx_21 << 2))
            void* rdx_24 = r15 + (rcx_21 << 2)
            
            while (j != 0xffffffff)
                if (j == rbx_12.d)
                    *rdx_24 = *(r9_1 + 0x20)
                    break
                
                int64_t j_1 = sx.q(j)
                int64_t rdx_26 = j_1 + ((j_1 + 1) << 2)
                j = *(r8_1 + (rdx_26 << 3))
                rdx_24 = r8_1 + (rdx_26 << 3)
        
        int64_t rcx_23 = *(*arg1 + rbx_12 * 0x28 + 8)
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        rbp = 1
        sub_1405c3590(arg1, rbx_12.d, 1)
        break
    
    i = rbx_11[4].d
    rsi_18 = &rbx_11[4]

return zx.q(rbp)
