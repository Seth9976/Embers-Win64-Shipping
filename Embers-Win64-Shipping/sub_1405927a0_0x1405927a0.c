// 函数: sub_1405927a0
// 地址: 0x1405927a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct std::wstring_convert<class std::codecvt_utf8<wchar_t, 1114111, 0>, wchar_t, class std::allocator<wchar_t>, class std::allocator<char> >::VTable
    * const result = &std::wstring_convert<class std::codecvt_utf8<wchar_t, 1114111, 0>, wchar_t, class std::allocator<wchar_t>, class std::allocator<char> >::`vftable'
*arg1 = &std::wstring_convert<class std::codecvt_utf8<wchar_t, 1114111, 0>, wchar_t, class std::allocator<wchar_t>, class std::allocator<char> >::`vftable'
int64_t rdx = arg1[0xb]

if (rdx u< 8)
    goto label_1405927f9

void* rcx = arg1[8]

if ((rdx << 1) + 2 u< 0x1000)
    goto label_1405927f2

void* r8_1 = *(rcx - 8)

if (rcx - r8_1 - 8 u<= 0x1f)
    rcx = r8_1
label_1405927f2:
    result = j_sub_140a74f90(rcx)
label_1405927f9:
    arg1[0xb] = 7
    arg1[0xa] = 0
    arg1[8].w = 0
    int64_t rdx_2 = arg1[7]
    
    if (rdx_2 u< 0x10)
        goto label_140592840
    
    void* rcx_2 = arg1[4]
    
    if (rdx_2 + 1 u< 0x1000)
        goto label_14059283b
    
    void* r8_2 = *(rcx_2 - 8)
    
    if (rcx_2 - r8_2 - 8 u<= 0x1f)
        rcx_2 = r8_2
    label_14059283b:
        result = j_sub_140a74f90(rcx_2)
    label_140592840:
        arg1[6] = 0
        arg1[7] = 0xf
        arg1[4].b = 0
        int64_t* rcx_4 = arg1[3]
        
        if (rcx_4 != 0)
            result = (*(*rcx_4 + 0x10))(rcx_4)
            
            if (result != 0)
                void*** (* const vFunc_0)(void*** arg1, char arg2) = result->vFunc_0
                return (*vFunc_0)(result, 1, vFunc_0)
        
        return result

_invalid_parameter_noinfo_noreturn()
noreturn
