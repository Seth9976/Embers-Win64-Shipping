// 函数: sub_1408975e0
// 地址: 0x1408975e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rflags
char rcx
rcx, rflags = _bit_scan_reverse(0xfffffffffffffff)

if (arg2 u> 1 << rcx)
    std::_Xlength_error("invalid hash bucket count")
    noreturn

int64_t rbx = *(arg1 + 8)
uint64_t rflags_1
char rcx_1
rcx_1, rflags_1 = _bit_scan_reverse((arg2 - 1) | 1)
int64_t rdi = 1 << (rcx_1 + 1)
sub_1408974b0(arg1 + 0x18, rdi * 2, rbx)
int64_t* rcx_4 = *(arg1 + 8)
void** result = rdi - 1
*(arg1 + 0x30) = result
*(arg1 + 0x38) = rdi
int64_t* rcx_5 = *rcx_4
int64_t* rdx_1 = rcx_5

if (rcx_5 != rbx)
    do
        rdx_1 = *rdx_1
        result = zx.q(*(rcx_5 + 0x13))
        int64_t r11_2 = *(arg1 + 0x30) & ((((((((zx.q(rcx_5[2].b) ^ 0xcbf29ce484222325)
            * 0x100000001b3) ^ zx.q(*(rcx_5 + 0x11))) * 0x100000001b3) ^ zx.q(*(rcx_5 + 0x12)))
            * 0x100000001b3) ^ result) * 0x100000001b3)
        int64_t* r11_4 = (r11_2 << 4) + *(arg1 + 0x18)
        int64_t r9_10 = *r11_4
        
        if (r9_10 != rbx)
            result = r11_4[1]
            int32_t r8_1 = rcx_5[2].d
            
            if (r8_1 == result[2].d)
                void* r8_2 = *result
                
                if (r8_2 != rcx_5)
                    int64_t** r10_1 = rcx_5[1]
                    *r10_1 = rdx_1
                    void** r9_11 = rdx_1[1]
                    *r9_11 = r8_2
                    result = *(r8_2 + 8)
                    *result = rcx_5
                    *(r8_2 + 8) = r9_11
                    rdx_1[1] = r10_1
                    rcx_5[1] = result
                
                r11_4[1] = rcx_5
            else if (r9_10 == result)
            label_140897721:
                int64_t** r10_2 = rcx_5[1]
                *r10_2 = rdx_1
                void*** r9_12 = rdx_1[1]
                *r9_12 = result
                int64_t** r8_3 = result[1]
                *r8_3 = rcx_5
                result[1] = r9_12
                rdx_1[1] = r10_2
                rcx_5[1] = r8_3
                *r11_4 = rcx_5
            else
                while (true)
                    result = result[1]
                    
                    if (r8_1 == result[2].d)
                        void* r10_3 = *result
                        int64_t** r9_13 = rcx_5[1]
                        *r9_13 = rdx_1
                        void** r8_4 = rdx_1[1]
                        *r8_4 = r10_3
                        result = *(r10_3 + 8)
                        *result = rcx_5
                        *(r10_3 + 8) = r8_4
                        rdx_1[1] = r9_13
                        rcx_5[1] = result
                        break
                    
                    if (r9_10 == result)
                        goto label_140897721
        else
            *r11_4 = rcx_5
            r11_4[1] = rcx_5
        
        rcx_5 = rdx_1
    while (rdx_1 != rbx)

return result
