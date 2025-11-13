// 函数: sub_1413935e0
// 地址: 0x1413935e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg2 == 0)
    void* rax_1 = *sub_14139d540(arg1)
    char r8_1
    int128_t zmm0
    
    if (rax_1 == 0)
        r8_1 = 0
    else
        void* rax_2 = *(rax_1 + 8)
        zmm0 = *(rax_2 + 0x20)
        int32_t rax_4 = zmm0.d
        
        if (rax_4 != *(arg1 + 0x3e0))
            r8_1 = 0
        else
            bool z_1
            
            if (rax_4 == 1)
                if (not(zmm0:4.d.d f!= *(arg1 + 0x3e4)) && not(zmm0:8.d.d f!= *(arg1 + 0x3e8))
                        && not(zmm0:0xc.d.d f!= *(arg1 + 0x3ec)))
                    zmm0 = *(rax_2 + 0x30)
                    float temp1_1 = *(arg1 + 0x3f0)
                    zmm0.d f- temp1_1
                    z_1 = zmm0.d f== temp1_1
                    goto label_14139367c
                
                r8_1 = 0
            else if (rax_4 != 2)
                r8_1 = 1
            else if (zmm0:4.d.d f!= *(arg1 + 0x3e4))
                r8_1 = 0
            else
                z_1 = zmm0:8.d == *(arg1 + 0x3e8)
            label_14139367c:
                
                r8_1 = not(z_1) ? 0 : 1
    
    void* rax_6 = *(arg1 + 0x40)
    char rdx
    
    if (rax_6 == 0)
        rdx = 0
    else
        void* rax_7 = *(rax_6 + 8)
        zmm0 = *(rax_7 + 0x20)
        int32_t rax_9 = zmm0.d
        
        if (rax_9 != *(arg1 + 0x3f4))
            rdx = 0
        else
            bool z_2
            
            if (rax_9 == 1)
                if (not(zmm0:4.d.d f!= *(arg1 + 0x3f8)) && not(zmm0:8.d.d f!= *(arg1 + 0x3fc))
                        && not(zmm0:0xc.d.d f!= *(arg1 + 0x400)))
                    zmm0 = *(rax_7 + 0x30)
                    float temp3_1 = *(arg1 + 0x404)
                    zmm0.d f- temp3_1
                    z_2 = zmm0.d f== temp3_1
                    goto label_141393706
                
                rdx = 0
            else if (rax_9 != 2)
                rdx = 1
            else if (zmm0:4.d.d f!= *(arg1 + 0x3f8))
                rdx = 0
            else
                z_2 = zmm0:8.d == *(arg1 + 0x3fc)
            label_141393706:
                
                rdx = not(z_2) ? 0 : 1
    
    void* rax_11 = *(arg1 + 0x198)
    char rcx
    
    if (rax_11 == 0)
        rcx = 1
    else
        void* rax_12 = *(rax_11 + 8)
        zmm0 = *(rax_12 + 0x20)
        int32_t rax_14 = zmm0.d
        
        if (rax_14 != *(arg1 + 0x3e0))
            rcx = 0
        else if (rax_14 != 1)
            if (rax_14 != 2 || (not(zmm0:4.d.d f!= *(arg1 + 0x3e4)) && zmm0:8.d == *(arg1 + 0x3e8)))
                rcx = 1
            else
                rcx = 0
        else if (zmm0:4.d.d f!= *(arg1 + 0x3e4) || zmm0:8.d.d f!= *(arg1 + 0x3e8)
                || zmm0:0xc.d.d f!= *(arg1 + 0x3ec) || (*(rax_12 + 0x30)).d f!= *(arg1 + 0x3f0))
            rcx = 0
        else
            rcx = 1
    
    result = *(arg1 + 0x1a0)
    
    if (result == 0)
        result.b = 1
    else
        void* rax_15 = *(result + 8)
        zmm0 = *(rax_15 + 0x20)
        result = zx.q(zmm0.d)
        
        if (result.d != *(arg1 + 0x3f4))
            result.b = 0
        else if (result.d != 1)
            if (result.d != 2
                    || (not(zmm0:4.d.d f!= *(arg1 + 0x3f8)) && zmm0:8.d == *(arg1 + 0x3fc)))
                result.b = 1
            else
                result.b = 0
        else if (zmm0:4.d.d f!= *(arg1 + 0x3f8) || zmm0:8.d.d f!= *(arg1 + 0x3fc)
                || zmm0:0xc.d.d f!= *(arg1 + 0x400) || (*(rax_15 + 0x30)).d f!= *(arg1 + 0x404))
            result.b = 0
        else
            result.b = 1
    
    if (r8_1 == 0 || rdx == 0 || rcx == 0 || result.b == 0)
        result.b = 0
        return result

result.b = 1
return result
