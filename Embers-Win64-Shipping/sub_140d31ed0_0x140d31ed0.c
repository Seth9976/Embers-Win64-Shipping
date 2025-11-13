// 函数: sub_140d31ed0
// 地址: 0x140d31ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_48)
int128_t* i = data_143e1d898
int64_t* var_58 = nullptr
int64_t* rbp = nullptr
int32_t var_4c = 0
int32_t rdi = 0
data_143e1d898 = 0
int32_t r14 = 0
data_143e1d8a0 = 0

while (i != 0)
    int64_t rsi_1 = sx.q(rdi)
    rdi = (rsi_1 + 1).d
    
    if (rdi s> r14)
        sub_1405a4f90(&var_58)
        r14 = var_4c
        rbp = var_58
    
    int128_t* i_2 = i
    *(rbp + rsi_1 * 0x10) = *i
    i = *(i + 8)
    j_sub_140a74f90(i_2)

int32_t r12 = 0

if (rdi s> 0)
    int64_t r13_1 = 0
    
    do
        sub_140d315a0(*(rbp + r13_1))
        int128_t* i_1 = data_143e1d898
        data_143e1d898 = 0
        data_143e1d8a0 = 0
        
        while (i_1 != 0)
            int64_t rbx = sx.q(rdi)
            rdi = (rbx + 1).d
            
            if (rdi s> r14)
                sub_1405a4f90(&var_58)
                r14 = var_4c
                rbp = var_58
            
            int128_t* i_3 = i_1
            *(rbp + rbx * 0x10) = *i_1
            i_1 = *(i_1 + 8)
            j_sub_140a74f90(i_3)
        
        r12 += 1
        r13_1 += 0x10
    while (r12 s< rdi)

if (rbp != 0)
    sub_140a74f90(rbp)

return pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_48)
