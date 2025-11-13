// 函数: sub_1423c91c0
// 地址: 0x1423c91c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140d23dc0(arg1, 0x30)

if (result.b == 0)
    int64_t* rax = sub_1423c1c90()
    result = (*(*arg1 + 0x328))(arg1)
    int64_t* result_1 = result
    
    if (result != 0)
        int64_t arg_18 = 0
        sub_1423bd540(arg1)
        int64_t rax_1 = j_sub_140a82f30(0x30)
        
        if (rax_1 == 0)
            rax_1 = 0
        else
            __builtin_memset(rax_1, 0, 0x30)
        
        *result_1 = rax_1
        (*(*arg2 + 0x140))(arg2, &arg_18)
        int32_t rcx_3
        rcx_3.b = sub_140b5b8a0(arg_18.d, 0).b == 0
        result.b = arg_18:4.d != 0
        result.b |= rcx_3.b
        
        while (result.b != 0)
            int32_t rax_3
            int512_t zmm1_1
            rax_3, zmm1_1 = sub_140be0d00(rax, arg_18, 0)
            int64_t* rdx_2 = arg2[1]
            int64_t arg_20 = 0
            int64_t* r8_2 = *rdx_2
            
            if (&r8_2[1] u> rdx_2[1])
                int64_t* rdx_3 = &arg_20
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b540d0(arg2, rdx_3, zmm1_1)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_3, 8)
            else
                arg_20 = *r8_2
                *rdx_2 += 8
            
            int32_t* rbx_2 = *result_1
            
            if (rbx_2[3] != 0 || (&data_1439c8600)[sx.q(rax_3) * 0x28] == 0)
                (*(*arg2 + 0x178))(arg2, arg_20)
            else
                sub_1423c9400(arg2, rbx_2, arg1, 1, 0)
                
                if ((arg2[5].b & 1) != 0)
                    if (rbx_2[8] s<= 0)
                        void* rcx_14 = *(rbx_2 + 0x28)
                        
                        if (rcx_14 != 0)
                            *rbx_2 = *(rcx_14 + 8)
                            rbx_2[1] = *(rcx_14 + 0xc)
                    else
                        int64_t* rdx_5 = *(rbx_2 + 0x18)
                        *rbx_2 = **rdx_5
                        rbx_2[1] = *(*rdx_5 + 4)
                        void* rax_8 = sub_1425b9040()
                        void* rdx_6 = arg1[2]
                        int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                        
                        if (rax_9.d s<= *(rdx_6 + 0x38)
                                && *(*(rdx_6 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30)
                            rbx_2[2] ^= (*(**(rbx_2 + 0x18) + 8) ^ rbx_2[2]) & 0x3fffffff
            
            (*(*arg2 + 0x140))(arg2, &arg_18)
            int32_t rcx_17
            rcx_17.b = sub_140b5b8a0(arg_18.d, 0).b == 0
            result.b = arg_18:4.d != 0
            result.b |= rcx_17.b
        
        if ((arg2[5].b & 1) != 0)
            arg1[0xb].d = 0

return result
