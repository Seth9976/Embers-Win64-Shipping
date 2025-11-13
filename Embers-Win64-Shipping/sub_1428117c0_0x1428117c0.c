// 函数: sub_1428117c0
// 地址: 0x1428117c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
uint64_t result = zx.q(*(arg3 + 0x48))
int64_t r10 = arg4
void* r9 = arg1

if (result.d != 0)
    uint64_t i_1 = zx.q(result.d)
    int64_t rsi_1 = 0
    uint64_t result_1 = result
    uint64_t i
    
    do
        int64_t* rbx_2 = *(arg3 + 0x40) + rsi_1
        result = zx.q(rbx_2[4].d)
        
        if ((result.b & 5) == 0)
            char* _Str1_2 = *rbx_2
            
            if (not(test_bit(result.d, 8)))
                goto label_1428118b6
            
            char* _Str1_1 = *(arg3 + 0x20)
            
            if (_Str1_1 == 0)
                i_1 = result_1
            else
                result = strcmp(_Str1_1, "Gu::GeometryUnion")
                
                if (result.d != 0)
                    i_1 = result_1
                else
                    char* _Str1 = sub_142816550(arg1, _Str1_2, *(sx.q(arg6) + arg2))
                    _Str1_2 = _Str1
                    int32_t rax_1 = strcmp(_Str1, "PxTriangleMeshGeometryLL")
                    
                    if (rax_1 != 0)
                        result = strcmp(_Str1_2, "PxHeightFieldGeometryLL")
                    
                    if (rax_1 != 0 && result.d != 0)
                        i_1 = result_1
                    else
                        i_1 = result_1
                        r9 = arg1
                        r10 = arg4
                    label_1428118b6:
                        result = zx.q(rbx_2[4].d)
                        
                        if ((result.b & 0x10) != 0)
                            int64_t rcx_5 = sx.q(*arg5) * 6
                            *(r10 + (rcx_5 << 3)) = *rbx_2
                            *(r10 + (rcx_5 << 3) + 0x10) = *(rbx_2 + 0x10)
                            *(r10 + (rcx_5 << 3) + 0x20) = rbx_2[4]
                            result = sx.q(*arg5)
                            *(r10 + result * 0x30 + 0x28) = arg6 + rbx_2[2].d
                            *arg5 += 1
                            i_1 = result_1
                        else if ((result.b & 8) == 0)
                            result = sub_142815b60(r9, _Str1_2, arg7)
                            
                            if (result != 0 && *result == 0)
                                result = sub_1428117c0(arg1, arg2, result, arg4, arg5, 
                                    arg6 + rbx_2[2].d, arg7)
                            
                            i_1 = result_1
        
        arg3 = arg_18
        rsi_1 += 0x28
        r9 = arg1
        i = i_1
        i_1 -= 1
        r10 = arg4
        result_1 = i_1
    while (i != 1)

return result
