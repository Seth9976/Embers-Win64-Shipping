// 函数: sub_1428b6440
// 地址: 0x1428b6440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
__chkstk(0x50)
void var_78
void* rsp_1 = &var_78
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t var_38 = __security_cookie ^ &var_38
int64_t result

if (arg1 == 0 || arg2 == 0)
    *_errno() = 0x16
    result = 0
else
    int64_t i_1 = 0
    *_errno() = 0
    WIN32_FIND_DATAW* lpFindFileData = *arg1
    
    if (lpFindFileData != 0)
        if (FindNextFileW(lpFindFileData->__offset(0x250).q, lpFindFileData) == 0)
            result = 0
        else
        label_1428b6782:
            int64_t rax_25 = *arg1
            int64_t i = 0
            
            if (*(rax_25 + 0x2c) != 0)
                while (i u< 0xff)
                    i += 1
                    
                    if (*(rax_25 + 0x2c + (i << 1)) == 0)
                        break
            
            *(rsp_1 + 0x38) = 0
            *(rsp_1 + 0x30) = 0
            *(rsp_1 + 0x28) = 0x100
            *(rsp_1 + 0x20) = rax_25 + 0x258
            
            if (WideCharToMultiByte(nop) == 0 && i != -1)
                do
                    *(*arg1 + i_1 + 0x258) = *(rax_25 + 0x2c + (i_1 << 1))
                    i_1 += 1
                while (i_1 u< i + 1)
            
            *(*arg1 + 0x357) = 0
            result = *arg1 + 0x258
    else
        int32_t i_2 = 0
        char* rcx = arg2
        
        if (*arg2 != 0)
            while (i_2 u< 0x80000000)
                rcx = &rcx[1]
                i_2 += 1
                
                if (*rcx == 0)
                    break
        
        uint64_t r15_1 = zx.q(i_2) & 0x7fffffff
        
        if (r15_1 - 1 u> 0x7ffffffb)
            *_errno() = 2
            result = 0
        else
            int64_t rax_4 = malloc(0x358)
            *arg1 = rax_4
            
            if (rax_4 != 0)
                memset(rax_4, 0, 0x358)
                int32_t rax_6 = MultiByteToWideChar(0xfde9, 0, arg2, (r15_1 + 1).d, nullptr, 0)
                int32_t r13 = rax_6
                
                if (rax_6 s<= 0 && GetLastError() == ERROR_NO_UNICODE_TRANSLATION)
                    r13 = MultiByteToWideChar(0, 0, arg2, (r15_1 + 1).d, nullptr, 0)
                
                void* lpFileName
                
                if (rax_6 s<= 0 && r13 s<= 0)
                    r13 = (r15_1 + 1).d
                    int64_t rcx_3 = sx.q((r15_1 + 3).d) * 2
                    int64_t rax_10 = rcx_3 + 0xf
                    
                    if (rax_10 u<= rcx_3)
                        rax_10 = 0xffffffffffffff0
                    
                    int64_t rax_11 = rax_10 & 0xfffffffffffffff0
                    __chkstk(rax_11)
                    rsp_1 = &var_78 - rax_11
                    void* i_3 = nullptr
                    lpFileName = rsp_1 + 0x40
                    
                    if (r15_1 != -1)
                        if (r15_1 + 1 u>= 0x20 && (lpFileName u> &arg2[r15_1]
                                || lpFileName - 2 + ((r15_1 + 1) << 1) u< arg2))
                            void* rax_14 = lpFileName + 0x20
                            
                            do
                                int512_t zmm0
                                zmm0.o = zx.o(*(arg2 + i_3))
                                int512_t zmm1
                                zmm1.o = zx.o(*(arg2 + i_3 + 8))
                                zmm0.o = _mm_unpacklo_epi8(zmm0.o, zmm0.q)
                                zmm1.o = _mm_unpacklo_epi8(zmm1.o, zmm1.q)
                                zmm0.o = _mm_srai_epi16(zmm0.o, 8)
                                *(rax_14 - 0x20) = zmm0.o
                                zmm0.o = zx.o(*(arg2 + i_3 + 0x10))
                                zmm1.o = _mm_srai_epi16(zmm1.o, 8)
                                *(rax_14 - 0x10) = zmm1.o
                                zmm1.o = zx.o(*(arg2 + i_3 + 0x18))
                                i_3 += 0x20
                                zmm0.o = _mm_unpacklo_epi8(zmm0.o, zmm0.q)
                                zmm1.o = _mm_unpacklo_epi8(zmm1.o, zmm1.q)
                                zmm0.o = _mm_srai_epi16(zmm0.o, 8)
                                *rax_14 = zmm0.o
                                zmm1.o = _mm_srai_epi16(zmm1.o, 8)
                                *(rax_14 + 0x10) = zmm1.o
                                rax_14 += 0x40
                            while (i_3 u< ((r15_1 + 1) & 0xffffffffffffffe0))
                        
                        for (; i_3 u< r15_1 + 1; i_3 += 1)
                            *(lpFileName + (i_3 << 1)) = sx.w(*(i_3 + arg2))
                    
                    goto label_1428b6661
                
                int64_t rcx_6 = sx.q(r13 + 2) * 2
                int64_t rax_18 = rcx_6 + 0xf
                
                if (rax_18 u<= rcx_6)
                    rax_18 = 0xffffffffffffff0
                
                int64_t rax_19 = rax_18 & 0xfffffffffffffff0
                __chkstk(rax_19)
                rsp_1 = &var_78 - rax_19
                lpFileName = rsp_1 + 0x40
                *(rsp_1 + 0x28) = r13
                *(rsp_1 + 0x20) = lpFileName
                void* rcx_8
                
                if (MultiByteToWideChar(nop) != 0)
                label_1428b6661:
                    int64_t rcx_4 = sx.q(r13)
                    int16_t rax_16 = *(lpFileName + (rcx_4 << 1) - 4)
                    
                    if (rax_16 != 0x2a)
                        if (rax_16 == 0x2f || rax_16 == 0x5c)
                            *(lpFileName + (rcx_4 << 1) - 2) = 0x2a
                        else
                            *(lpFileName + (rcx_4 << 1) - 2) = 0x2a002f
                            *(lpFileName + (rcx_4 << 1) + 2) = 0
                    
                    *(*arg1 + 0x250) = FindFirstFileW(lpFileName, *arg1)
                    rcx_8 = *arg1
                    
                    if (*(rcx_8 + 0x250) != -1)
                        goto label_1428b6782
                    
                    goto label_1428b66f6
                
                rcx_8 = *arg1
            label_1428b66f6:
                free(rcx_8)
                *arg1 = 0
                *_errno() = 0x16
                result = 0
            else
                *_errno() = 0xc
                result = 0

__security_check_cookie(var_38 ^ &var_38)
return result
