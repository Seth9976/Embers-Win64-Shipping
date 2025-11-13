// 函数: sub_140ab2760
// 地址: 0x140ab2760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_28)
sub_140aae6a0()
sub_140a7e560()
char* rax = sub_140a752e0()
int64_t* rdi = *(rax + 0x30)

if (rdi != 0)
    rdi[1].d += 1

int64_t* var_38
int64_t* rax_1 = sub_140a7c320(*(rax + 0x28), &var_38)
sub_140a85410(sub_140a752e0(), rax_1)
int32_t i_2
int32_t i_1 = i_2
int64_t* rbx_1 = var_38

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_38

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_5 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*rdi + 8))(rdi, 1)

char* rax_7 = sub_140aae970()
char rbx_2 = *rax_7
*rax_7 = 0
sub_140a9eb70(0x1c)
*rax_7 = rbx_2

if (data_143db9ad8 != 0)
    int64_t rcx_8 = data_143db9ac8
    data_143db9ad8 = 0
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

char* rax_8 = sub_140a752e0()
int64_t* rdi_2 = *(rax_8 + 0x30)

if (rdi_2 != 0)
    rdi_2[1].d += 1

int64_t* rax_9 = sub_140903440(*(rax_8 + 0x28))
sub_140ab51b0(sub_140aae970(), rax_9, 0x18)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rsi = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rsi == 1)
            (*(*rdi_2 + 8))(rdi_2, zx.q(rsi))

*sub_140aae970() = 1
return pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_28)
