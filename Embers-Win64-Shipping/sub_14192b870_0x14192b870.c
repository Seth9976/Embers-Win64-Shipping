// 函数: sub_14192b870
// 地址: 0x14192b870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141936220(arg1)
int64_t rcx = *(arg1 + 0x658)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = *(arg1 + 0x640)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = *(arg1 + 0x630)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0x608)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t i_2 = 6
void* rsi = arg1 + 0x5e8

for (int64_t i = 6; i != 0; )
    int64_t rcx_4 = *(rsi - 0x10)
    rsi -= 0x30
    i -= 1
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int32_t j_1 = *(rsi + 0x18)
    int64_t* rbx_1 = *(rsi + 0x10)
    
    if (j_1 != 0)
        int32_t j
        
        do
            int64_t rcx_5 = *rbx_1
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rbx_1 = &rbx_1[2]
            j = j_1
            j_1 -= 1
        while (j != 1)
        rbx_1 = *(rsi + 0x10)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    int64_t rcx_7 = *rsi
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

void* rbx_2 = arg1 + 0x450
int64_t result
int64_t i_1

do
    rbx_2 -= 0xb8
    result = sub_14192b980(rbx_2)
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return result
