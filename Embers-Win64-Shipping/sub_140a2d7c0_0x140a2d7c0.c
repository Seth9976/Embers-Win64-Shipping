// 函数: sub_140a2d7c0
// 地址: 0x140a2d7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* lpTlsValue_1 = TlsGetValue(*arg1)
int64_t* lpTlsValue = lpTlsValue_1

if (lpTlsValue_1 == 0)
    int64_t* lpTlsValue_2 = j_sub_140a82f30(zx.q((lpTlsValue_1 + 0xc).d))
    lpTlsValue = lpTlsValue_2
    
    if (lpTlsValue_2 == 0)
        lpTlsValue = nullptr
    else
        *lpTlsValue_2 = 0
        lpTlsValue_2[1].d = 0
    
    TlsSetValue(*arg1, lpTlsValue)

int32_t result = *(lpTlsValue + 4)

if (result == 0)
    int32_t rax = *lpTlsValue
    
    if (rax == 0)
        int32_t rax_1 = sub_140a2d3e0(&arg1[2])
        *(lpTlsValue + 4) = rax_1
        
        if (rax_1 == 0)
            int32_t i_3 = data_143cf0bb0
            data_143cf0bb0 += 0x40
            
            if (i_3 + 0x40 u> 0x4000000)
                sub_140af98a0("Unknown", rax_1 + 0x30, 
                    Consumed %d lock free links; there are no more.", 0x4000000)
                sub_140afbb40()
            
            int32_t i = i_3
            
            if (i_3 u< i_3 + 0x40)
                uint64_t i_4 = zx.q(i_3)
                
                do
                    if (*((i_4 u>> 0xe << 3) + &data_143cf0bf8) == 0)
                        int64_t rax_4 = sub_140a82f30(0x60000, 0)
                        bool z_1
                        
                        if (0 == *((i_4 u>> 0xe << 3) + &data_143cf0bf8))
                            *((i_4 u>> 0xe << 3) + &data_143cf0bf8) = rax_4
                            z_1 = true
                        else
                            *((i_4 u>> 0xe << 3) + &data_143cf0bf8)
                            z_1 = false
                        
                        if (not(z_1))
                            sub_140a74f90(rax_4)
                    
                    int64_t rax_6 = *((i_4 u>> 0xe << 3) + &data_143cf0bf8)
                    uint64_t rcx_6 = (zx.q(i) & 0x3fff) * 3
                    i += 1
                    i_4 += 1
                    *(rax_6 + (rcx_6 << 3)) = 0
                    *(rax_6 + (rcx_6 << 3) + 8) = 0
                    *(rax_6 + (rcx_6 << 3) + 0x10) = 0
                while (i u< i_3 + 0x40)
            
            int32_t rdx_3 = i_3 + 2
            int64_t i_2 = 4
            int64_t i_1
            
            do
                int64_t* rcx_7
                
                if (rdx_3 != 2)
                    rcx_7 = *((zx.q(rdx_3 - 2) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(rdx_3 - 2) & 0x3fff) * 0x18
                else
                    rcx_7 = nullptr
                
                *rcx_7 = 0
                rcx_7[2].d = 0
                rcx_7[1] = zx.q(*(lpTlsValue + 4))
                *(lpTlsValue + 4) = rdx_3 - 2
                int64_t* rcx_11
                
                if (rdx_3 != 1)
                    rcx_11 = *((zx.q(rdx_3 - 1) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(rdx_3 - 1) & 0x3fff) * 0x18
                else
                    rcx_11 = nullptr
                
                *rcx_11 = 0
                rcx_11[2].d = 0
                rcx_11[1] = zx.q(*(lpTlsValue + 4))
                *(lpTlsValue + 4) = rdx_3 - 1
                int64_t* rcx_15
                
                if (rdx_3 != 0)
                    rcx_15 = *((zx.q(rdx_3) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(rdx_3) & 0x3fff) * 0x18
                else
                    rcx_15 = nullptr
                
                *rcx_15 = 0
                rcx_15[2].d = 0
                rcx_15[1] = zx.q(*(lpTlsValue + 4))
                *(lpTlsValue + 4) = rdx_3
                int64_t* rcx_19
                
                if (rdx_3 != 0xffffffff)
                    rcx_19 = *((zx.q(rdx_3 + 1) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(rdx_3 + 1) & 0x3fff) * 0x18
                else
                    rcx_19 = nullptr
                
                *rcx_19 = 0
                rcx_19[2].d = 0
                rcx_19[1] = zx.q(*(lpTlsValue + 4))
                *(lpTlsValue + 4) = rdx_3 + 1
                int64_t* rcx_23
                
                if (rdx_3 != 0xfffffffe)
                    rcx_23 = *((zx.q(rdx_3 + 2) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(rdx_3 + 2) & 0x3fff) * 0x18
                else
                    rcx_23 = nullptr
                
                *rcx_23 = 0
                rcx_23[2].d = 0
                rcx_23[1] = zx.q(*(lpTlsValue + 4))
                *(lpTlsValue + 4) = rdx_3 + 2
                int64_t* rcx_27
                
                if (rdx_3 != 0xfffffffd)
                    rcx_27 = *((zx.q(rdx_3 + 3) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(rdx_3 + 3) & 0x3fff) * 0x18
                else
                    rcx_27 = nullptr
                
                *rcx_27 = 0
                rcx_27[2].d = 0
                rcx_27[1] = zx.q(*(lpTlsValue + 4))
                *(lpTlsValue + 4) = rdx_3 + 3
                int64_t* rcx_31
                
                if (rdx_3 != 0xfffffffc)
                    rcx_31 = *((zx.q(rdx_3 + 4) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(rdx_3 + 4) & 0x3fff) * 0x18
                else
                    rcx_31 = nullptr
                
                *rcx_31 = 0
                rcx_31[2].d = 0
                rcx_31[1] = zx.q(*(lpTlsValue + 4))
                *(lpTlsValue + 4) = rdx_3 + 4
                int64_t* rcx_35
                
                if (rdx_3 != 0xfffffffb)
                    rcx_35 = *((zx.q(rdx_3 + 5) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(rdx_3 + 5) & 0x3fff) * 0x18
                else
                    rcx_35 = nullptr
                
                *rcx_35 = 0
                rcx_35[2].d = 0
                rcx_35[1] = zx.q(*(lpTlsValue + 4))
                *(lpTlsValue + 4) = rdx_3 + 5
                int64_t* rcx_39
                
                if (rdx_3 != 0xfffffffa)
                    rcx_39 = *((zx.q(rdx_3 + 6) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(rdx_3 + 6) & 0x3fff) * 0x18
                else
                    rcx_39 = nullptr
                
                *rcx_39 = 0
                rcx_39[2].d = 0
                rcx_39[1] = zx.q(*(lpTlsValue + 4))
                *(lpTlsValue + 4) = rdx_3 + 6
                int64_t* rcx_43
                
                if (rdx_3 != 0xfffffff9)
                    rcx_43 = *((zx.q(rdx_3 + 7) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(rdx_3 + 7) & 0x3fff) * 0x18
                else
                    rcx_43 = nullptr
                
                *rcx_43 = 0
                rcx_43[2].d = 0
                rcx_43[1] = zx.q(*(lpTlsValue + 4))
                *(lpTlsValue + 4) = rdx_3 + 7
                int64_t* rcx_47
                
                if (rdx_3 != 0xfffffff8)
                    rcx_47 = *((zx.q(rdx_3 + 8) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(rdx_3 + 8) & 0x3fff) * 0x18
                else
                    rcx_47 = nullptr
                
                *rcx_47 = 0
                rcx_47[2].d = 0
                rcx_47[1] = zx.q(*(lpTlsValue + 4))
                *(lpTlsValue + 4) = rdx_3 + 8
                int64_t* rcx_51
                
                if (rdx_3 != 0xfffffff7)
                    rcx_51 = *((zx.q(rdx_3 + 9) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(rdx_3 + 9) & 0x3fff) * 0x18
                else
                    rcx_51 = nullptr
                
                *rcx_51 = 0
                rcx_51[2].d = 0
                rcx_51[1] = zx.q(*(lpTlsValue + 4))
                *(lpTlsValue + 4) = rdx_3 + 9
                int64_t* rcx_55
                
                if (rdx_3 != 0xfffffff6)
                    rcx_55 = *((zx.q(rdx_3 + 0xa) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(rdx_3 + 0xa) & 0x3fff) * 0x18
                else
                    rcx_55 = nullptr
                
                *rcx_55 = 0
                rcx_55[2].d = 0
                rcx_55[1] = zx.q(*(lpTlsValue + 4))
                *(lpTlsValue + 4) = rdx_3 + 0xa
                int64_t* rcx_59
                
                if (rdx_3 != 0xfffffff5)
                    rcx_59 = *((zx.q(rdx_3 + 0xb) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(rdx_3 + 0xb) & 0x3fff) * 0x18
                else
                    rcx_59 = nullptr
                
                *rcx_59 = 0
                rcx_59[2].d = 0
                rcx_59[1] = zx.q(*(lpTlsValue + 4))
                *(lpTlsValue + 4) = rdx_3 + 0xb
                int64_t* rcx_63
                
                if (rdx_3 != 0xfffffff4)
                    rcx_63 = *((zx.q(rdx_3 + 0xc) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(rdx_3 + 0xc) & 0x3fff) * 0x18
                else
                    rcx_63 = nullptr
                
                *rcx_63 = 0
                rcx_63[2].d = 0
                rcx_63[1] = zx.q(*(lpTlsValue + 4))
                *(lpTlsValue + 4) = rdx_3 + 0xc
                int32_t r8_15 = rdx_3 + 0xd
                int64_t* rcx_67
                
                if (r8_15 != 0)
                    rcx_67 = *((zx.q(r8_15) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(r8_15) & 0x3fff) * 0x18
                else
                    rcx_67 = nullptr
                
                *rcx_67 = 0
                rdx_3 += 0x10
                rcx_67[2].d = 0
                rcx_67[1] = zx.q(*(lpTlsValue + 4))
                *(lpTlsValue + 4) = r8_15
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(lpTlsValue + 4) = rax
        *lpTlsValue = 0
    
    result = *(lpTlsValue + 4)
    lpTlsValue[1].d = 0x40

void* rdx_4

if (result != 0)
    rdx_4 = *((zx.q(result) u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(result) & 0x3fff) * 0x18
else
    rdx_4 = nullptr

lpTlsValue[1].d -= 1
*(lpTlsValue + 4) = *(rdx_4 + 8)
*(rdx_4 + 8) = 0
return result
