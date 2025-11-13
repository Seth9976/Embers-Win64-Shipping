// 函数: sub_14089e050
// 地址: 0x14089e050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = nullptr
int64_t* arg_8 = nullptr
int64_t* rcx = *arg1
(*(*rcx + 0x18))(rcx, &arg_20)
int64_t* rdi = arg_20
int64_t* rcx_1 = arg_8

if (rcx_1 != 0)
    arg_8 = nullptr
    (*(*rcx_1 + 0x10))(rcx_1)

(*(*rdi + 0x140))(rdi, &arg_8)
int64_t* rcx_3 = arg_8
int64_t result = (*(*rcx_3 + 0x78))(rcx_3, *arg1, 0)
int64_t* rcx_4 = arg_8

if (rcx_4 != 0)
    arg_8 = nullptr
    result = (*(*rcx_4 + 0x10))(rcx_4)

int64_t* rcx_5 = arg_20

if (rcx_5 == 0)
    return result

arg_20 = nullptr
return (*(*rcx_5 + 0x10))(rcx_5)
