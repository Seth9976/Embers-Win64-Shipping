// 函数: sub_1406bea60
// 地址: 0x1406bea60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int64_t var_218 = 0
int32_t r13 = 0
void* rax_2 = avformat_alloc_context()
*(arg1 + 0x50) = rax_2
*(arg1 + 0x60) = 0
*(rax_2 + 0x4c8) = sub_1406baa50
*(*(arg1 + 0x50) + 0x4d0) = arg1

if (av_dict_get(var_218, "scan_all_pmts", 0, 1) == 0)
    av_dict_set(&var_218, "scan_all_pmts", &data_143702518, 0x10)
    r13 = 1

int64_t* rax_5 = sub_1406c8bf0()
void* r14 = rax_5[0x23]

if (r14 == 0)
    int64_t rdx = *rax_5
    (*(rdx + 0x390))(rax_5, rdx)
    r14 = rax_5[0x23]

uint32_t rax_6 = zx.d(*(r14 + 0x2d))

if (rax_6.b != 0)
    if (rax_6 == 1)
        av_dict_set(&var_218, "rtsp_transport", &data_142d8dc18, 0)
    else if (rax_6 == 2)
        av_dict_set(&var_218, "rtsp_transport", "udp_multicast", 0)
    else if (rax_6 == 3)
        av_dict_set(&var_218, "rtsp_transport", &data_142d8dc30, 0)
    else if (rax_6 == 4)
        av_dict_set(&var_218, "rtsp_transport", "http", 0)
    else if (rax_6 == 5)
        av_dict_set(&var_218, "rtsp_transport", "https", 0)

if (*(r14 + 0x2c) != 0)
    av_dict_set(&var_218, "fflags", "nobuffer", 0)

int64_t rcx_10 = *arg2
uint64_t (* var_238)(void* arg1, int64_t arg2, int32_t arg3, int512_t arg4 @ zmm1, 
    int512_t arg5 @ zmm2)
int64_t var_230
int64_t (* var_228)(void* arg1, int64_t arg2, int32_t arg3)
int32_t rbx_1

if (rcx_10 != 0)
    int64_t var_210 = rcx_10
    int64_t* rcx_18 = arg2[1]
    int64_t* var_208_1 = rcx_18
    
    if (rcx_18 != 0)
        rcx_18[1].d += 1
        rcx_18 = var_208_1
    
    if (&var_210 != arg1 + 0x68)
        arg4 = var_210.o
        int128_t var_178_1 = arg4
        var_210.o = *(arg1 + 0x68)
        *(arg1 + 0x68) = arg4
        rcx_18 = var_208_1
    
    if (rcx_18 != 0)
        rcx_18[1].d -= 1
        
        if (rcx_18[1].d == 1)
            (**var_208_1)(var_208_1, arg4)
            int32_t r14_1 = *(var_208_1 + 0xc)
            *(var_208_1 + 0xc) -= 1
            
            if (r14_1 == 1)
                (*(*var_208_1 + 8))(var_208_1, zx.q(r14_1))
    
    var_228 = sub_1406c0070
    var_230 = 0
    var_238 = sub_1406bf9f0
    int64_t rax_17 =
        avio_alloc_context(av_malloc(0x8020, arg4), 0x8000, 0, arg1, var_238, var_230, var_228)
    *(arg1 + 0x58) = rax_17
    *(*(arg1 + 0x50) + 0x20) = rax_17
    rbx_1 = avformat_open_input(arg1 + 0x50, "InMemoryFile", 0, &var_218)
else
    void var_168
    int64_t var_e8
    
    if (sub_140a32ae0(arg3, u"file://", (rcx_10 + 1).d) == 0)
        int16_t* const rdx_4
        
        if (arg3[1].d == 0)
            rdx_4 = &data_142d40450
        else
            rdx_4 = *arg3
        
        rbx_1 =
            avformat_open_input(arg1 + 0x50, *(sub_140685ed0(&var_168, rdx_4) + 0x88), 0, &var_218)
        
        if (var_e8 != 0)
            sub_140a74f90(var_e8)
    else
        rbx_1 = avformat_open_input(arg1 + 0x50, *(sub_140685ed0(&var_168, *arg3 + 0xe) + 0x88), 0, 
            &var_218)
        
        if (var_e8 != 0)
            sub_140a74f90(var_e8)

int64_t result

if (rbx_1 s>= 0)
    if (r13 != 0)
        av_dict_set(&var_218, "scan_all_pmts", 0, 1, var_238, var_230, var_228)
    
    if (av_dict_get(var_218, &data_1437020ab, 0, 2, var_238, var_230, var_228) != 0)
        void*** var_1a8_1 = nullptr
        void* var_190_1 = arg1
        void** const var_198 = &data_142d83c50
        int64_t (* var_1b8_1)(int64_t* arg1) = sub_1406b9e40
        int64_t* rax_26 = j_sub_140a82f30(0x50)
        int64_t* var_200_2 = rax_26
        
        if (rax_26 != 0)
            *rax_26 = 0
            rax_26[2] = var_1b8_1
            rax_26[4] = var_1a8_1
            var_1a8_1 = nullptr
            *(rax_26 + 0x30) = var_198.o
            int128_t var_188
            *(rax_26 + 0x40) = var_188
            int64_t (* rax_27)(int64_t* arg1) = var_1b8_1
            
            if (rax_26[2] != 0)
                rax_27 = nullptr
            
            var_1b8_1 = rax_27
            void** rax_28 = *(arg1 + 0x30)
            *(arg1 + 0x30) = rax_26
            *rax_28 = rax_26
        
        if (var_1b8_1 != 0)
            void** const* rcx_34 = &var_198
            
            if (var_1a8_1 != 0)
                rcx_34 = var_1a8_1
            
            (*rcx_34)[2](rcx_34)
        
        goto label_1406bee27
    
    av_dict_free(&var_218)
    av_format_inject_global_side_data(*(arg1 + 0x50))
    avformat_find_stream_info(*(arg1 + 0x50), 0)
    void* rax_31 = *(*(arg1 + 0x50) + 0x20)
    
    if (rax_31 != 0)
        *(rax_31 + 0x50) = 0
    
    sub_1406c4510(arg1)
    result = *(arg1 + 0x50)
else
    char _Buffer[0x80]
    
    if (av_strerror(zx.q(rbx_1), &_Buffer, 0x80) s< 0)
        strerror_s(&_Buffer, 0x80, zx.q(neg.d(rbx_1)))
    
    void*** var_1e8_1 = nullptr
    void* var_1d0_1 = arg1
    void** const var_1d8 = &data_142d83c50
    int64_t (* var_1f8_1)(int64_t* arg1) = sub_1406b9e40
    int64_t* rax_20 = j_sub_140a82f30(0x50)
    int64_t* var_200_1 = rax_20
    
    if (rax_20 != 0)
        *rax_20 = 0
        rax_20[2] = var_1f8_1
        rax_20[4] = var_1e8_1
        var_1e8_1 = nullptr
        *(rax_20 + 0x30) = var_1d8.o
        int128_t var_1c8
        *(rax_20 + 0x40) = var_1c8
        int64_t (* rax_21)(int64_t* arg1) = var_1f8_1
        
        if (rax_20[2] != 0)
            rax_21 = nullptr
        
        var_1f8_1 = rax_21
        void** rax_22 = *(arg1 + 0x30)
        *(arg1 + 0x30) = rax_20
        *rax_22 = rax_20
    
    if (var_1f8_1 != 0)
        void** const* rcx_28 = &var_1d8
        
        if (var_1e8_1 != 0)
            rcx_28 = var_1e8_1
        
        (*rcx_28)[2](rcx_28)
    
label_1406bee27:
    result = *(arg1 + 0x50)
    
    if (result != 0)
        avformat_close_input(arg1 + 0x50)
        *(arg1 + 0x50) = 0
        result = 0
    
    *(arg1 + 0x60) = 1

__security_check_cookie(rax_1 ^ &var_258)
return result
