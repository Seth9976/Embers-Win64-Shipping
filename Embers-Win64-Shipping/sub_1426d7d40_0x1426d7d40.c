// 函数: sub_1426d7d40
// 地址: 0x1426d7d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x60))
int64_t r11 = 0
int64_t rsi = sx.q(arg2)
int128_t zmm6 = zx.o(0)
int32_t* rdx_2

if (result.d == *(arg1 + 0x8c))
label_1426d7dbd:
    rdx_2 = nullptr
else
    void* r10_1 = arg1 + 0x90
    void* r8 = *(r10_1 + 8)
    
    if (r8 != 0)
        r10_1 = r8
    
    result = zx.q(*(r10_1 + (((sx.q(*(arg1 + 0xa0)) - 1) & rsi) << 2)))
    
    if (result.d == 0xffffffff)
    label_1426d7dbd_1:
        rdx_2 = nullptr
    else
        while (true)
            rdx_2 = (sx.q(result.d) << 5) + *(arg1 + 0x58)
            
            if (*rdx_2 == rsi.d)
                break
            
            result = zx.q(rdx_2[6])
            
            if (result.d == 0xffffffff)
                goto label_1426d7dbd_2
        
        if (result.d == 0xffffffff)
        label_1426d7dbd_2:
            rdx_2 = nullptr

void* rcx = &rdx_2[2]

if (rdx_2 == 0)
    rcx = nullptr

int512_t zmm0

if (rcx == 0)
    result = sx.q(*(arg1 + 0x48))
    
    if (result.d s<= 0)
    labelid_1:
        zmm0.o = zmm6
    else
        uint64_t result_1 = result
        result = *(arg1 + 0x40)
        void* rdi_2
        
        while (true)
            rdi_2 = *result
            
            if (*(rdi_2 + 0x30) == rsi.d)
                break
            
            r11 += 1
            result += 0x10
            
            if (r11 s>= result_1)
                goto label_1426d7ea7_2
        
        result = zx.q(*(rdi_2 + 0x78))
        
        if (result.d == *(rdi_2 + 0xa4))
        labelid_1:
            zmm0.o = zmm6
        else
            int32_t rax_6 = sub_140b5ead0(arg3.d) + arg3:4.d
            void* r8_4 = rdi_2 + 0xa8
            void* rcx_8 = *(r8_4 + 8)
            
            if (rcx_8 != 0)
                r8_4 = rcx_8
            
            result = zx.q(*(r8_4 + (((sx.q(*(rdi_2 + 0xb8)) - 1) & sx.q(rax_6)) << 2)))
            
            if (result.d == 0xffffffff)
            labelid_1:
                zmm0.o = zmm6
            else
                int64_t r8_5 = *(rdi_2 + 0x70)
                int64_t rcx_9
                
                while (true)
                    rcx_9 = sx.q(result.d)
                    int64_t rdx_10 = rcx_9 * 5
                    
                    if (*(r8_5 + (rdx_10 << 2)) == arg3)
                        break
                    
                    result = zx.q(*(r8_5 + (rdx_10 << 2) + 0xc))
                    
                    if (result.d == 0xffffffff)
                        goto label_1426d7ea7_2
                
                if (result.d == 0xffffffff)
                label_1426d7ea7:
                    zmm0.o = zmm6
                else
                    result = rcx_9 * 5
                    void* rcx_10 = r8_5 + (result << 2)
                    
                    if (rcx_10 == 0)
                    label_1426d7ea7_1:
                        zmm0.o = zmm6
                    else
                        zmm0.o = *(rcx_10 + 8)
else
    int64_t* rdi_1 = *(rcx + 8)
    
    if (rdi_1 != 0)
        result = zx.q(rdi_1[1].d)
        
        if (result.d == 0)
            rdi_1 = nullptr
        else
            result = zx.q(result.d + 1)
            rdi_1[1].d = result.d
        
        if (rdi_1 != 0)
            void* rsi_1 = *rcx
            
            if (rsi_1 != 0)
                result = zx.q(*(rsi_1 + 0x78))
                
                if (result.d != *(rsi_1 + 0xa4))
                    int32_t rax_1 = sub_140b5ead0(arg3.d) + arg3:4.d
                    void* r8_2 = rsi_1 + 0xa8
                    void* rcx_2 = *(r8_2 + 8)
                    
                    if (rcx_2 != 0)
                        r8_2 = rcx_2
                    
                    result = zx.q(*(r8_2 + (((sx.q(*(rsi_1 + 0xb8)) - 1) & sx.q(rax_1)) << 2)))
                    
                    if (result.d != 0xffffffff)
                        int64_t r8_3 = *(rsi_1 + 0x70)
                        
                        do
                            int64_t rcx_3 = sx.q(result.d)
                            int64_t rdx_6 = rcx_3 * 5
                            
                            if (*(r8_3 + (rdx_6 << 2)) == arg3)
                                if (result.d != 0xffffffff)
                                    result = rcx_3 * 5
                                    void* rcx_4 = r8_3 + (result << 2)
                                    
                                    if (rcx_4 != 0)
                                        zmm6 = *(rcx_4 + 8)
                                
                                break
                            
                            result = zx.q(*(r8_3 + (rdx_6 << 2) + 0xc))
                        while (result.d != 0xffffffff)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    result = (**rdi_1)(rdi_1)
                    int32_t temp1_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        result = (*(*rdi_1 + 8))(rdi_1, 1)
    
label_1426d7ea7_2:
    zmm0.o = zmm6
return result
