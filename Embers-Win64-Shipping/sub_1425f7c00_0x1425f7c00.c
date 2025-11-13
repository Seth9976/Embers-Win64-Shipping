// 函数: sub_1425f7c00
// 地址: 0x1425f7c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = (*(arg1 + 0x274)).b

if ((rax & 1) != 0 && arg1[0xd].d != 0)
    if ((rax & 2) == 0)
    label_1425f7c2e:
        int64_t* rcx = arg1[0x40]
        (*(*rcx + 0x48))(rcx)
        int64_t* rcx_1 = arg1[0x42]
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x90))(rcx_1)
            arg1[0x42] = 0
        
        int64_t* rcx_2 = arg1[0x41]
        
        if (rcx_2 == 0)
            sub_141c494b0(arg1)
        else
            (*(*rcx_2 + 0x90))(rcx_2)
            arg1[0x41] = 0
        
        *(arg1 + 0x274) &= 0xfffffffd
        uint64_t result
        result.b = 1
        arg1[0xd].d = 0
        return result
    
    if ((*(*arg1 + 0xa8))() != 0)
        goto label_1425f7c2e

return 0
