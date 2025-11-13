// 函数: sub_140f0b090
// 地址: 0x140f0b090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x76].d != 0)
    int64_t* rcx = arg1[0x75]
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (arg1[0x76].d == 0)
            rcx_1 = nullptr
        else
            rcx_1 = arg1[0x75]
        
        arg1[0x74].b = (*(*rcx_1 + 0x48))(rcx_1)

uint32_t rcx_2 = zx.d(arg1[0x74].b)
char rdx = arg1[0x73].b
int64_t result

if (rcx_2 == 0)
    if (rdx == 0)
        if ((*(*arg1 + 0x1c8))(arg1) == 0)
            result = arg1[0x79]
            
            if (result == 0)
                return arg1[0x72] + 0x10
        else
            result = arg1[0x7a]
            
            if (result == 0)
                return arg1[0x72] + 0x98
    else
        result = arg1[0x7b]
        
        if (result == 0)
            return arg1[0x72] + 0x120
else if (rcx_2 == 1)
    if (rdx == 0)
        if ((*(*arg1 + 0x1c8))(arg1) == 0)
            result = arg1[0x7c]
            
            if (result == 0)
                return arg1[0x72] + 0x1a8
        else
            result = arg1[0x7d]
            
            if (result == 0)
                return arg1[0x72] + 0x230
    else
        result = arg1[0x7e]
        
        if (result == 0)
            return arg1[0x72] + 0x2b8
else if (rdx == 0)
    if ((*(*arg1 + 0x1c8))(arg1) == 0)
        result = arg1[0x7f]
        
        if (result == 0)
            return arg1[0x72] + 0x340
    else
        result = arg1[0x80]
        
        if (result == 0)
            return arg1[0x72] + 0x3c8
else
    result = arg1[0x81]
    
    if (result == 0)
        return arg1[0x72] + 0x450

return result
