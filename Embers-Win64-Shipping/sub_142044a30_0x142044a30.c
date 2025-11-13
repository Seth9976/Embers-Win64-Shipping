// 函数: sub_142044a30
// 地址: 0x142044a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(arg1)

if (rax.d u<= 9)
    switch (rax)
        case 0
            int64_t* result_1 = j_sub_140a82f30(0x18)
            int64_t* result = result_1
            
            if (result_1 == 0)
                result = result_1
            else
                *result = 0
                result[1] = 0
                result[2] = 0
                *(result + 6) = 0
                *(result + 0xa) = 0
                *(result + 0xc) = 0
                *(result + 0x14) = 0
            
            sub_1420f6310(result, arg2)
            sub_1419c7530(result + 0xc, arg2, u"VertexFetch_InstanceTransformBuffer", 0)
            sub_1419c7530(&result[2], arg2, u"VertexFetch_InstancePrevTransformBuffer", 0)
            sub_1419c7530(result + 0x14, arg2, u"VertexFetch_InstanceBoneMapBuffer", 0)
            return result

return 0
