// 函数: sub_140ca6840
// 地址: 0x140ca6840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(*arg2 + 8)
char rax_1 = r14[5].b
int32_t rsi_1

if ((rax_1 & 3) != 0 && (rax_1 & 0x10) == 0)
    rsi_1 = arg1[0x16].d

int64_t r15

if ((rax_1 & 3) == 0 || (rax_1 & 0x10) != 0 || (rsi_1.b & 0x20) != 0)
    rsi_1 = arg1[0x16].d
    r15.b = 1
else
    r15.b = 0

int32_t rsi_2 = rsi_1 & 0x800
char result

if (r15.b != 0 || rsi_2 != 0)
    (*(*r14 + 0x170))(r14, arg1)
    
    if (rsi_2 != 0)
        int64_t* rsi_3 = arg1[0x17]
        
        if ((*(*rsi_3 + 0x38))(rsi_3) == 0)
            int64_t r9 = *rsi_3
            result = (*(r9 + 0x48))(rsi_3, *(*arg2 + 8), arg3, r9)
        else
            result = (*(*rsi_3 + 0x40))(rsi_3, arg2, arg3)
    
    if (rsi_2 == 0 || result == 0)
        if (r15.b == 0)
            result = (*(*arg1 + 0x290))(arg1, arg2, arg3, arg1, arg4, 0)
        else if (r14[5].b s< 0 || r14[6].d == 0 || (arg1[0x16].b & 0x10) != 0
                || (*(r14 + 0x2b) & 0x10) != 0)
            result = (*(*arg1 + 0x280))(arg1, arg2, arg3)
        else
            result = sub_140ca4a60(arg1, arg2, arg3, arg4, arg1)
else
    result = (*(*arg1 + 0x290))(arg1, arg2, arg3, arg1, arg4, 0)

if ((arg1[0x16].d & 0x40000) == 0)
    return result

int64_t* rcx_6 = arg1[0x17]
return (*(*rcx_6 + 0x58))(rcx_6, r14, arg3)
