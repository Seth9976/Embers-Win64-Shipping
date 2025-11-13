// 函数: sub_1428bc6f0
// 地址: 0x1428bc6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t _ArgList = arg2
int64_t r8
int64_t arg_18 = r8
int64_t r9
int64_t arg_20 = r9
int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
__chkstk(0x278)
void* numberOfBytesWritten
int64_t rax_1 = __security_cookie ^ &numberOfBytesWritten
HANDLE hFile = GetStdHandle(STD_ERROR_HANDLE)
enum FILE_TYPE rax_2

if (hFile != 0)
    rax_2 = GetFileType(hFile)

HANDLE hEventLog
void var_248

if (hFile == 0 || rax_2 == FILE_TYPE_UNKNOWN)
    uint64_t r9_3 = zx.q(sub_142853640(arg1) + 1)
    uint64_t rax_4 = r9_3 * 2
    uint64_t rbx_1 = zx.q(r9_3.d)
    int64_t rcx_5 = rax_4 + 0xf
    
    if (rcx_5 u<= rax_4)
        rcx_5 = 0xffffffffffffff0
    
    int64_t rcx_6 = rcx_5 & 0xfffffffffffffff0
    __chkstk(rcx_6)
    void var_2a8
    void* rsp_1 = &var_2a8 - rcx_6
    
    if (rsp_1 != -0x50)
        *(rsp_1 + 0x28) = r9_3.d
        *(rsp_1 + 0x20) = rsp_1 + 0x50
        
        if (MultiByteToWideChar(0, 0) == 0)
            void* i = nullptr
            
            if (rbx_1 != 0)
                if (rbx_1 u>= 0x20 && (rsp_1 + 0x50 u> &arg1[-1 + rbx_1]
                        || rsp_1 + 0x50 + ((rbx_1 - 1) << 1) u< arg1))
                    void* rcx_8 = rsp_1 + 0x70
                    
                    do
                        int512_t zmm0
                        zmm0.o = zx.o(*(arg1 + i))
                        rcx_8 += 0x40
                        int512_t zmm1
                        zmm1.o = zx.o(*(arg1 + i + 8))
                        zmm0.o = _mm_unpacklo_epi8(zmm0.o, zmm0.q)
                        zmm1.o = _mm_unpacklo_epi8(zmm1.o, zmm1.q)
                        zmm0.o = _mm_srai_epi16(zmm0.o, 8)
                        *(rcx_8 - 0x60) = zmm0.o
                        zmm0.o = zx.o(*(arg1 + i + 0x10))
                        zmm1.o = _mm_srai_epi16(zmm1.o, 8)
                        *(rcx_8 - 0x50) = zmm1.o
                        zmm1.o = zx.o(*(arg1 + i + 0x18))
                        i += 0x20
                        zmm0.o = _mm_unpacklo_epi8(zmm0.o, zmm0.q)
                        zmm1.o = _mm_unpacklo_epi8(zmm1.o, zmm1.q)
                        zmm0.o = _mm_srai_epi16(zmm0.o, 8)
                        zmm1.o = _mm_srai_epi16(zmm1.o, 8)
                        *(rcx_8 - 0x40) = zmm0.o
                        *(rcx_8 - 0x30) = zmm1.o
                    while (i u< (rbx_1 & 0xffffffffffffffe0))
                
                for (; i u< rbx_1; i += 1)
                    *(rsp_1 + 0x50 + (i << 1)) = sx.w(*(i + arg1))
        
        int64_t r8_7 = 0
        
        if (rbx_1 != 0)
            while (true)
                if (*(rsp_1 + 0x50 + (r8_7 << 1)) == 0x25)
                    void* rdx_3 = rsp_1 + 0x52 + (r8_7 << 1)
                    
                    while (true)
                        int32_t rax_12 = zx.d(*rdx_3) - 0x2a
                        
                        if (rax_12 u> 0x49)
                            break
                        
                        switch (rax_12)
                            case 0, 3, 4, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf
                                r8_7 += 1
                                rdx_3 += 2
                                continue
                            case 1, 2, 5, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
                                    0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 
                                    0x24, 0x25, 0x26, 0x27, 0x28, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 
                                    0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 
                                    0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 
                                    0x44, 0x45, 0x46, 0x47, 0x48
                                break
                            case 0x19
                                *rdx_3 = 0x63
                                break
                            case 0x29
                                *rdx_3 = 0x73
                                break
                            case 0x39
                                *rdx_3 = 0x43
                                break
                            case 0x49
                                *rdx_3 = 0x53
                                break
                
                r8_7 += 1
                
                if (r8_7 u>= rbx_1)
                    break
    
    *(rsp_1 + 0x28) = &_ArgList
    *(rsp_1 + 0x20) = 0
    data_143cd5b30
    __stdio_common_vswprintf(nop)
    int16_t var_4a_1 = 0
    int32_t rax_14
    int512_t zmm0_1
    rax_14, zmm0_1 = sub_1428bc570()
    
    if (rax_14 s<= 0)
        hEventLog = MessageBoxW(nullptr, &var_248, u"OpenSSL: FATAL", MB_ICONHAND)
    else
        hEventLog = RegisterEventSourceW(nullptr, u"OpenSSL")
        
        if (hEventLog != 0)
            *(rsp_1 + 0x40) = 0
            numberOfBytesWritten = &var_248
            *(rsp_1 + 0x38) = &numberOfBytesWritten
            *(rsp_1 + 0x30) = 0
            *(rsp_1 + 0x28) = 1
            *(rsp_1 + 0x20) = 0
            ReportEventW(nop)
            hEventLog = DeregisterEventSource(hEventLog)
else
    int32_t nNumberOfBytesToWrite =
        __stdio_common_vsprintf(data_143cd5b30 | 1, &var_248, 0x200, arg1, nullptr, &_ArgList)
    
    if (nNumberOfBytesToWrite s< 0)
        nNumberOfBytesToWrite = -1
    
    if (nNumberOfBytesToWrite s< 0)
        nNumberOfBytesToWrite = 0x200
    
    hEventLog = WriteFile(hFile, &var_248, nNumberOfBytesToWrite, &numberOfBytesWritten, nullptr)
__security_check_cookie(rax_1 ^ &numberOfBytesWritten)
return hEventLog
