// 函数: sub_142cc03c0
// 地址: 0x142cc03c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = 2
int32_t* rdi = &data_143de7190

for (int64_t i = 2; i != 0; )
    int64_t rcx_1 = *(rdi - 0x10)
    rdi = &rdi[-4]
    i -= 1
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)

int64_t* rbx = &data_143de7170

do
    i_1 -= 1
    rbx = &rbx[-5]
    
    while (*rbx != 0)
        void* rcx_2 = *rbx
        *rbx = *(rcx_2 + 0x80)
        j_sub_140a74f90(rcx_2)
    
    *rbx = 0
    rbx[1] = 0
while (i_1 != 0)
