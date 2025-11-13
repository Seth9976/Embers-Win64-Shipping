// 函数: sub_142361450
// 地址: 0x142361450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t result = zx.o(0)
void* rax_1 = (*(*arg1 + 0x278))()

if (rax_1 == 0)
label_142361488:
    int64_t* rcx_1 = arg1[0x2d]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x268))(rcx_1)
        
        if (not(result.d f>= arg2.d))
            result = arg2
    
    if (not(result.d f<= 9.99999975e-05f))
        return result
    
    void* rax_3 = arg1[0x21]
    
    if (rax_3 != 0 && (*(rax_3 + 0xd8) & 1) != 0)
        return sub_141e5fae0(rax_3 + 0x28) __tailcall
else if ((*(rax_1 + 0xb0) & 1) != 0)
    arg2, result = sub_141e5fae0(rax_1)
    
    if (not(arg2.d f<= result.d))
        result = arg2
    
    goto label_142361488

return 0x4a000000
