// 函数: sub_142062870
// 地址: 0x142062870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[1].b & 0x30) == 0)
    int64_t rdi
    rdi.b = 0
    
    if ((arg1[0xb6].b & 1) != 0)
        void* rax_2
        
        if (arg1[0x15] == 0)
            rax_2 = sub_141ee69e0(arg1)
        
        if (arg1[0x15] != 0 || rax_2 != 0)
            void* rax_3 = arg1[0x15]
            
            if (rax_3 == 0)
                rax_3 = sub_141ee69e0(arg1)
            
            if (sub_14243ade0(rax_3) != 0)
                arg2 = 0x3f800000
                int32_t zmm0 = *data_143f432a8
                
                if (zmm0 f>= 0f)
                    zmm0 = _mm_min_ss(zmm0, 0x3f800000)
                else
                    zmm0 = (zx.o(0)).d
                
                zmm0 f- 1f
                *(arg1 + 0x5b4) = zmm0
                rdi.b = zmm0 f< 1f
    
    if (0f f!= *(arg1 + 0x5b4))
        if (rdi.b == 0)
            int32_t rax_7 = arg1[0x94].d
            
            if (rax_7 s<= 0 || rax_7 == arg1[0x9b].d)
                void* rax_8 = sub_141dc9840(arg1[0x14])
                
                if (rax_8 == 0)
                label_142062990:
                    int64_t* r8_1 = arg1[0xa2]
                    arg1[0xa2] = 0
                    arg2 = sub_142097c30(arg1, 1, r8_1, 0, arg2)
                    *(arg1 + 0x564) = *(*(arg1[0x9d] + 0xc0) + 0x40)
                    *(arg1 + 0x5dc) = arg1[0xac].d
                else
                    void* rsi_1 = *(rax_8 + 0xb8)
                    
                    if (rsi_1 == 0)
                        goto label_142062990
                    
                    if (sub_1420f98f0(rsi_1) == 0)
                        goto label_142062990
                    
                    if (sub_1420f98f0(rsi_1) == rax_8)
                        goto label_142062990
                    
                    rdi.b = 1
            else
                rdi.b = 1
        
        sub_1420516f0(arg1, 1, rdi.b, arg2)
    else
        (*(*arg1 + 0x940))(arg1, arg2)

int64_t* rdx_1 = arg1[0xa2]

if (rdx_1 == 0)
    return 

arg1[0xa2] = 0
return sub_14204b340(&arg1[0xa2], rdx_1) __tailcall
