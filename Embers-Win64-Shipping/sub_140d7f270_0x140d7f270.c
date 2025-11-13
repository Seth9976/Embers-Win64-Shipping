// 函数: sub_140d7f270
// 地址: 0x140d7f270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
CoInitialize(nullptr)
int64_t* ppv = nullptr
CoCreateInstance(&data_1434cb330, 0, CLSCTX_INPROC_SERVER, &data_142ec14c8, &ppv)
int64_t* ppv_1 = ppv
int16_t* const rdx = &data_142d40450
int64_t* var_70
int64_t* var_b0 = &var_70

if (data_143e205e0 != 0)
    rdx = data_143e205d8

var_70 = nullptr
int64_t* var_b8
var_b8.d = 0
int32_t rax_3 = (*(*ppv_1 + 0x18))(ppv_1, rdx, 0, 0x80000000, var_b8, var_b0)
int64_t* var_80 = nullptr
int32_t rbx = rax_3

if (rax_3 s>= 0)
    int64_t* rcx = var_70
    rbx = (*(*rcx + 0x68))(rcx, 0, &var_80)

int64_t* var_60 = nullptr

if (rbx s>= 0)
    int64_t* rcx_1 = var_80
    rbx = (**rcx_1)(rcx_1, &data_1436bbbf0, &var_60)

int64_t* rcx_5 = nullptr
int64_t* var_98 = nullptr

if (rbx s>= 0)
    int64_t* ppv_2 = ppv
    int64_t* var_88 = nullptr
    int32_t rax_9 = (*(*ppv_2 + 0x50))(ppv_2, &var_88)
    rbx = rax_9
    
    if (rax_9 s>= 0)
        int64_t* rdx_2 = var_80
        int512_t zmm0
        zmm0.o = zx.o(0)
        int64_t rax_10 = *var_88
        int64_t var_b8_1
        __builtin_memset(&var_b8_1, 0, 0x14)
        int32_t var_a8
        int32_t rax_11 =
            (*(rax_10 + 0x40))(zmm0, rdx_2, &data_1434cb4c0, 0, var_b8_1, var_b0, var_a8)
        rbx = rax_11
        
        if (rax_11 s>= 0)
            int64_t* rcx_3 = var_88
            rbx = (**rcx_3)(rcx_3, &data_142ec14d8, &var_98)
    
    int64_t* rcx_4 = var_88
    (*(*rcx_4 + 0x10))(rcx_4)
    rcx_5 = var_98

HBITMAP ho = nullptr

if (rbx s>= 0)
    int32_t var_90 = 0
    int32_t var_8c = 0
    int64_t ppvBits = 0
    void buffer1
    
    if ((*(*rcx_5 + 0x20))(rcx_5, &buffer1) s< 0)
        rcx_5 = var_98
    else
        int32_t rax_17
        int32_t rcx_7
        rax_17, rcx_7 = memcmp(&buffer1, &data_1434cb4c0, 0x10)
        
        if ((sbb.d(rcx_7, rcx_7, rax_17 != 0) & 0x80004005) s< 0)
            rcx_5 = var_98
        else
            int64_t* rcx_10 = var_98
            
            if ((*(*rcx_10 + 0x18))(rcx_10, &var_90, &var_8c) s< 0)
                rcx_5 = var_98
            else
                int32_t var_54_1 = var_90
                int32_t var_50_1 = neg.d(var_8c)
                int128_t var_44
                __builtin_memset(&var_44, 0, 0x18)
                int32_t pbmi = 0x28
                int64_t var_4c_1 = 0x200001
                HDC rax_24 = GetDC(nullptr)
                int32_t rax_25 = -0x7fffbffb
                
                if (rax_24 != 0)
                    rax_25 = 0
                
                if (rax_24 != 0)
                    var_b0.d = 0
                    ho =
                        CreateDIBSection(rax_24, &pbmi, DIB_RGB_COLORS, &ppvBits, nullptr, var_b0.d)
                    ReleaseDC(nullptr, rax_24)
                    rax_25 = -0x7fffbffb
                    
                    if (ho != 0)
                        rax_25 = 0
                
                if (rax_25 s< 0)
                label_140d7f4fa:
                    rcx_5 = var_98
                label_140d7f4fe:
                    
                    if (ho != 0)
                        DeleteObject(ho)
                        ho = nullptr
                        rcx_5 = var_98
                else
                    uint64_t rcx_13 = zx.q(var_90) << 2
                    int32_t r8_5 = -1
                    
                    if (rcx_13 u<= 0xffffffff)
                        r8_5 = rcx_13.d
                    
                    if (rcx_13 u> 0xffffffff)
                        goto label_140d7f4fa
                    
                    int64_t rcx_15 = zx.q(r8_5) * zx.q(var_8c)
                    int32_t rax_28 = 0
                    
                    if (rcx_15 u> 0xffffffff)
                        rax_28 = -0x7ff8fdea
                    
                    if (rcx_15 u> 0xffffffff)
                        goto label_140d7f4fa
                    
                    rcx_5 = var_98
                    
                    if (rcx_5 != 0)
                        int64_t ppvBits_1 = ppvBits
                        rax_28 = (*(*rcx_5 + 0x38))(rcx_5, 0)
                        rcx_5 = var_98
                    
                    if (rax_28 s< 0)
                        goto label_140d7f4fe

int64_t* rdx_7 = var_60

if (rdx_7 != 0)
    (*(*rdx_7 + 0x10))(rdx_7)
    rcx_5 = var_98

if (rcx_5 != 0)
    (*(*rcx_5 + 0x10))(rcx_5)

int64_t* rcx_18 = var_70

if (rcx_18 != 0)
    (*(*rcx_18 + 0x10))(rcx_18)

int64_t* rcx_19 = var_80

if (rcx_19 != 0)
    (*(*rcx_19 + 0x10))(rcx_19)

int64_t* ppv_3 = ppv

if (ppv_3 != 0)
    (*(*ppv_3 + 0x10))(ppv_3)

__security_check_cookie(rax_1 ^ &var_d8)
return ho
