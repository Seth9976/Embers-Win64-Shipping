// 函数: sub_142cc3680
// 地址: 0x142cc3680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

DeleteCriticalSection(&data_143e1da90)
int64_t rcx = data_143e1da80

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = data_143e1da70

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

DeleteCriticalSection(&data_143e1d9c0)
void* rcx_2 = data_143e1d9a8

if (rcx_2 != 0)
    j_sub_140a74f90(rcx_2 - 8)
else
    int32_t rdx = (data_143e1d9b8).d
    int32_t rbx_1 = 0
    
    if (rdx s> 0)
        int64_t* rdi_1 = nullptr
        
        do
            void* rcx_3 = *(rdi_1 + data_143e1d9a0)
            
            if (rcx_3 != 0)
                j_sub_140a74f90(rcx_3 - 8)
                rdx = (data_143e1d9b8).d
            
            rbx_1 += 1
            rdi_1 = &rdi_1[1]
        while (rbx_1 s< rdx)

return j_sub_140a74f90(data_143e1d9a0) __tailcall
