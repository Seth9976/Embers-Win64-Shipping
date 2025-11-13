// 函数: sub_140590240
// 地址: 0x140590240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
void* var_198 = arg1
int64_t* var_190 = arg2

if (*(arg1 + 0x58) == 0)
    std::wostream::operator<<(
        sub_140593a10(std::wcerr, 
            "Starting new video record session without stopping previouse one."), 
        sub_140593eb0)

struct CVideoRecorder::ITask::CVideoRecorder::CStopVideoRecordRequest::VTable* const _Pfacet_3

if (arg2[7] != 0)
    _Pfacet_3 = &CVideoRecorder::CStopVideoRecordRequest::`vftable'{for `CVideoRecorder::ITask'}
    char var_1a0_1 = 1
    sub_140590dd0(&_Pfacet_3, arg2)

*(arg2 + 0x149) = 1
char rdx_1 = *(arg1 + 0x48)
int32_t rcx_3 = *(arg1 + 0x30)
int64_t* rax_3

if (rcx_3 != 0)
    if (rcx_3 != 1)
        char const* const exceptionObject = "Invalid codec ID"
        _CxxThrowException(&exceptionObject, &data_143948b28)
        noreturn
    
    if (rdx_1 == 0)
        rax_3 = avcodec_find_encoder(0xad)
    else
        rax_3 = avcodec_find_encoder_by_name("nvenc_hevc")
else if (rdx_1 == 0)
    rax_3 = avcodec_find_encoder(0x1b)
else
    rax_3 = avcodec_find_encoder_by_name("nvenc_h264")

if (rax_3 == 0)
    char const* const exceptionObject_1 = "Fail to find codec"
    _CxxThrowException(&exceptionObject_1, &data_143948b28)
    noreturn

int64_t rbx
rbx.b = sub_14058f0b0(*(arg1 + 0x30), *(arg1 + 0x48)) != avcodec_find_encoder(0x1b)
void* rcx_7 = avcodec_alloc_context3(rax_3)
int64_t rax_7 = arg2[1]
arg2[1] = rcx_7
int64_t var_1b8

if (rax_7 != 0)
    var_1b8 = rax_7
    avcodec_free_context(&var_1b8)
    rcx_7 = arg2[1]

if (rcx_7 == 0)
    char const* const exceptionObject_2 = "Fail to init codec"
    _CxxThrowException(&exceptionObject_2, &data_143948b28)
    noreturn

*(rcx_7 + 0x74) = *(arg1 + 0x28) & 0xfffffffe
*(arg2[1] + 0x78) = *(arg1 + 0x2c) & 0xfffffffe
var_1b8.d = 1
var_1b8:4.d = *(arg1 + 0x54)
*(arg2[1] + 0x64) = var_1b8
*(arg2[1] + 0x88) = 0
int64_t r8 = *(arg1 + 0x38)
void** rax_24
void* rbx_3
int32_t r15_2

if (rbx.b == 0)
    if (r8 != -1)
        int32_t rax_28 = av_opt_set_int(arg2[1], &data_1437024d8, r8, 1)
        
        if (rax_28 s< 0)
            void* rbx_5 = arg1 + 8
            void** rax_29 = sub_140593a10(std::wcerr, "Fail to set crf for video "")
            wchar16* r8_3 = *(rbx_5 + 0x10)
            
            if (*(rbx_5 + 0x18) u>= 8)
                rbx_5 = *rbx_5
            
            void** rax_31 = sub_140593a10(sub_1405943c0(rax_29, rbx_5, r8_3), "": ")
            char* rbx_6 = *arg2
            av_strerror(zx.q(rax_28), rbx_6, 0x40)
            std::wostream::operator<<(sub_140593c70(sub_140593a10(rax_31, rbx_6), 0x2e), 
                sub_140593eb0)
    
    int64_t rax_34 = sx.q(*(arg1 + 0x40))
    
    if (rax_34.d != 0xffffffff)
        if (rax_34.d u> 9)
            void* rbx_8 = arg1 + 8
            int64_t* rax_41 = sub_140593a10(std::wcerr, "Invalid encode preset value for video "")
            wchar16* r8_6 = *(rbx_8 + 0x10)
            
            if (*(rbx_8 + 0x18) u>= 8)
                rbx_8 = *rbx_8
            
            std::wostream::operator<<(sub_140593a10(sub_1405943c0(rax_41, rbx_8, r8_6), ""."), 
                sub_140593eb0)
        else
            char const* const r8_4
            
            switch (rax_34)
                case 0
                    r8_4 = "placebo"
                case 1
                    r8_4 = "veryslow"
                case 2
                    r8_4 = "slower"
                case 3
                    r8_4 = "slow"
                case 4
                    r8_4 = "medium"
                case 5
                    r8_4 = "fast"
                case 6
                    r8_4 = "faster"
                case 7
                    r8_4 = "veryfast"
                case 8
                    r8_4 = "superfast"
                case 9
                    r8_4 = "ultrafast"
            
            int32_t rax_37 = av_opt_set(*(arg2[1] + 0x20), "preset", r8_4, 0)
            r15_2 = rax_37
            
            if (rax_37 s< 0)
                rbx_3 = arg1 + 8
                rax_24 = sub_140593a10(std::wcerr, "Fail to set preset for video "")
                goto label_14059066f
else
    if (r8 != -1)
        int32_t rax_14 = av_opt_set_int(arg2[1], &data_143702454, r8, 1)
        
        if (rax_14 s< 0)
            void* rbx_1 = arg1 + 8
            void** rax_15 = sub_140593a10(std::wcerr, "Fail to set cq for video "")
            wchar16* r8_1 = *(rbx_1 + 0x10)
            
            if (*(rbx_1 + 0x18) u>= 8)
                rbx_1 = *rbx_1
            
            void** rax_17 = sub_140593a10(sub_1405943c0(rax_15, rbx_1, r8_1), "": ")
            char* rbx_2 = *arg2
            av_strerror(zx.q(rax_14), rbx_2, 0x40)
            std::wostream::operator<<(sub_140593c70(sub_140593a10(rax_17, rbx_2), 0x2e), 
                sub_140593eb0)
    
    int64_t rax_20 = sx.q(*(arg1 + 0x40))
    
    if (rax_20.d u> 0xa)
        void** rbx_4 = arg1 + 8
        int64_t* rax_25 = sub_140593a10(std::wcerr, "Invalid encode preset value for video "")
        wchar16* r8_2 = rbx_4[2]
        
        if (rbx_4[3] u>= 8)
            rbx_4 = *rbx_4
        
        std::wostream::operator<<(sub_140593a10(sub_1405943c0(rax_25, rbx_4, r8_2), ""."), 
            sub_140593eb0)
    else
        jump_table_140590d74[rax_20]
        int32_t rax_23 = av_opt_set(*(arg2[1] + 0x20), "preset", &data_143702184, 0)
        r15_2 = rax_23
        
        if (rax_23 s< 0)
            rbx_3 = arg1 + 8
            rax_24 = sub_140593a10(std::wcerr, "Fail to set preset for video "")
        label_14059066f:
            wchar16* r8_5 = *(rbx_3 + 0x10)
            
            if (*(rbx_3 + 0x18) u>= 8)
                rbx_3 = *rbx_3
            
            void** rax_39 = sub_140593a10(sub_1405943c0(rax_24, rbx_3, r8_5), "": ")
            char* rbx_7 = *arg2
            av_strerror(zx.q(r15_2), rbx_7, 0x40)
            std::wostream::operator<<(sub_140593c70(sub_140593a10(rax_39, rbx_7), 0x2e), 
                sub_140593eb0)
av_opt_set(*(arg2[1] + 0x20), "tune", "film", 0)
av_opt_set(*(arg2[1] + 0x20), "deblock", &data_14370250c, 0)
av_opt_set(*(arg2[1] + 0x20), "non-deterministic", &data_143702518, 0)
av_opt_set(*(arg2[1] + 0x20), "x264opts", "sliced-threads=0:sync-lookahead=250", 0)
void** rax_46 =
    sub_140593a10(sub_140593a10(sub_140593a10(std::wclog, "Recording "), *rax_3), " video "")
void* rdx_18 = arg1 + 8

if (*(arg1 + 0x20) u>= 8)
    rdx_18 = *(arg1 + 8)

std::wostream::operator<<(
    sub_140593a10(
        std::wostream::operator<<(sub_140593a10(sub_1405943c0(rax_46, rdx_18, *(arg1 + 0x18)), 
            "" (using ")), 
        " threads for encoding)..."), 
    sub_140593eb0)
int32_t rax_51 = avcodec_open2(arg2[1], rax_3, 0)
char const* const var_1b0 = "Fail to open codec"
var_1b8.d = rax_51

if (rax_51 s< 0)
    void exceptionObject_5
    public: __cdecl `class std::unique_ptr<char16_t const[], struct std::default_delete<char16_t const[]>> __cdecl `anonymous namespace'::_Get_canonical_id(char16_t const *, int, int &, enum __std_tzdb_error &)'::`2'::<lambda_1>::<lambda_1>(char16_t const *const &, int const &)(
        &exceptionObject_5, &var_1b0, &var_1b8)
    _CxxThrowException(&exceptionObject_5, &data_143948d08)
    noreturn

void* rax_52 = av_frame_alloc("Fail to open codec")
char* rcx_64 = arg2[5]
arg2[5] = rax_52

if (rcx_64 != 0)
    var_1b0 = rcx_64
    av_frame_free(&var_1b0)
    rax_52 = arg2[5]

if (rax_52 == 0)
    char const* const exceptionObject_3 = "Fail to allocate frame"
    _CxxThrowException(&exceptionObject_3, &data_143948b28)
    noreturn

*(rax_52 + 0x74) = 0
*(arg2[5] + 0x68) = *(arg2[1] + 0x74)
*(arg2[5] + 0x6c) = *(arg2[1] + 0x78)
*(arg2[5] + 0x88) = -1
int32_t rax_58 = av_frame_get_buffer(arg2[5], 0x40)
var_1b0 = "Fail to allocate frame data"
var_1b8.d = rax_58

if (rax_58 s< 0)
    void exceptionObject_6
    public: __cdecl `class std::unique_ptr<char16_t const[], struct std::default_delete<char16_t const[]>> __cdecl `anonymous namespace'::_Get_canonical_id(char16_t const *, int, int &, enum __std_tzdb_error &)'::`2'::<lambda_1>::<lambda_1>(char16_t const *const &, int const &)(
        &exceptionObject_6, &var_1b0, &var_1b8)
    _CxxThrowException(&exceptionObject_6, &data_143948d08)
    noreturn

struct std::wstring_convert<class std::codecvt_utf8<wchar_t, 1114111, 0>, wchar_t, class std::allocator<wchar_t>, class std::allocator<char> >::VTable
    * var_b8 = &std::wstring_convert<class std::codecvt_utf8<wchar_t, 1114111, 0>, wchar_t, class std::allocator<wchar_t>, class std::allocator<char> >::`vftable'
class std::locale::_Locimp* _Right = std::locale::_Init(1)
int128_t var_88
__builtin_memcpy(&var_88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x12)
char var_98 = 0
int128_t var_68 = data_143702e90
int16_t var_50 = 0
char var_4e = 0
struct CVideoRecorder::ITask::CVideoRecorder::CStopVideoRecordRequest::VTable* _Pfacet_2 =
    j_sub_140a82f30(0x40)
struct std::codecvt<wchar_t, char, struct _Mbstatet>::std::codecvt_utf8<wchar_t, 1114111, 0>::VTable
    ** _Pfacet = _Pfacet_2
_Pfacet_3 = _Pfacet_2

if (_Pfacet_2 == 0)
    _Pfacet = nullptr
else
    std::codecvt<wchar_t, char, struct _Mbstatet>::codecvt<wchar_t, char, struct _Mbstatet>(
        _Pfacet_2)
    *_Pfacet = &std::codecvt_utf8<wchar_t, 1114111, 0>::`vftable'{for `std::codecvt<wchar_t, char, struct _Mbstatet>'}

int64_t var_58 = 0
struct std::codecvt<wchar_t, char, struct _Mbstatet>::std::codecvt_utf8<wchar_t, 1114111, 0>::VTable
    ** _Pfacet_1 = _Pfacet
class std::locale::_Locimp* rax_59 = std::locale::_Locimp::_New_Locimp(_Right)

if (_Pfacet != 0)
    std::locale::_Locimp::_Addfac(rax_59, _Pfacet, std::locale::id())
    rax_59->_Catmask = 0
    std::_Yarn<char>::operator=(&rax_59->_Name, U"*")

if (_Right != rax_59)
    int64_t* rax_62 = _Right->vtable->_Decref(_Right)
    
    if (rax_62 != 0)
        (**rax_62)(rax_62, 1)
    
    class std::locale::_Locimp* var_a0_1 = rax_59
    rax_59->vtable->_Incref(rax_59)

if (rax_59 != 0)
    int64_t* rax_65 = rax_59->vtable->_Decref(rax_59)
    
    if (rax_65 != 0)
        int64_t r8_10 = *rax_65
        (*r8_10)(rax_65, 1, r8_10)

int64_t var_48 = 0
void* r8_11 = arg1 + 8

if (*(arg1 + 0x20) u>= 8)
    r8_11 = *(arg1 + 8)

int64_t* var_e0
sub_140592ed0(&var_b8, &var_e0, r8_11, r8_11 + (*(arg1 + 0x18) << 1))
sub_1405927a0(&var_b8)
int64_t* r9_1 = &var_e0
int64_t var_c8

if (var_c8 u>= 0x10)
    r9_1 = var_e0

int32_t rax_67 = avformat_alloc_output_context2(&_Pfacet_3, 0, 0, r9_1)
var_1b0 = "Fail to init output context"
var_1b8.d = rax_67

if (rax_67 s< 0)
    void exceptionObject_7
    public: __cdecl `class std::unique_ptr<char16_t const[], struct std::default_delete<char16_t const[]>> __cdecl `anonymous namespace'::_Get_canonical_id(char16_t const *, int, int &, enum __std_tzdb_error &)'::`2'::<lambda_1>::<lambda_1>(char16_t const *const &, int const &)(
        &exceptionObject_7, &var_1b0, &var_1b8)
    _CxxThrowException(&exceptionObject_7, &data_143948d08)
    noreturn

int64_t rcx_82 = arg2[7]
arg2[7] = _Pfacet_3

if (rcx_82 != 0)
    avformat_free_context(rcx_82)

void* rax_69 = avformat_new_stream(arg2[7], rax_3)
arg2[8] = rax_69

if (rax_69 == 0)
    char const* const exceptionObject_4 = "Fail to add video stream"
    _CxxThrowException(&exceptionObject_4, &data_143948b28)
    noreturn

int32_t rax_70 = avcodec_parameters_from_context(*(rax_69 + 0xd0), arg2[1])
_Pfacet_3 = "Fail to extract codec parameters"
var_1b8.d = rax_70

if (rax_70 s< 0)
    void exceptionObject_8
    public: __cdecl `class std::unique_ptr<char16_t const[], struct std::default_delete<char16_t const[]>> __cdecl `anonymous namespace'::_Get_canonical_id(char16_t const *, int, int &, enum __std_tzdb_error &)'::`2'::<lambda_1>::<lambda_1>(char16_t const *const &, int const &)(
        &exceptionObject_8, &_Pfacet_3, &var_1b8)
    _CxxThrowException(&exceptionObject_8, &data_143948d08)
    noreturn

*(arg2[8] + 0x18) = *(arg2[1] + 0x64)
int64_t* rdx_24 = &var_e0

if (var_c8 u>= 0x10)
    rdx_24 = var_e0

int32_t rax_73 = avio_open(arg2[7] + 0x20, rdx_24, 2)
_Pfacet_3 = "Fail to create file"
var_1b8.d = rax_73

if (rax_73 s< 0)
    void exceptionObject_9
    public: __cdecl `class std::unique_ptr<char16_t const[], struct std::default_delete<char16_t const[]>> __cdecl `anonymous namespace'::_Get_canonical_id(char16_t const *, int, int &, enum __std_tzdb_error &)'::`2'::<lambda_1>::<lambda_1>(char16_t const *const &, int const &)(
        &exceptionObject_9, &_Pfacet_3, &var_1b8)
    _CxxThrowException(&exceptionObject_9, &data_143948d08)
    noreturn

int32_t result = avformat_write_header(arg2[7], 0)
_Pfacet_3 = "Fail to write header"
var_1b8.d = result

if (result s< 0)
    void exceptionObject_10
    public: __cdecl `class std::unique_ptr<char16_t const[], struct std::default_delete<char16_t const[]>> __cdecl `anonymous namespace'::_Get_canonical_id(char16_t const *, int, int &, enum __std_tzdb_error &)'::`2'::<lambda_1>::<lambda_1>(char16_t const *const &, int const &)(
        &exceptionObject_10, &_Pfacet_3, &var_1b8)
    _CxxThrowException(&exceptionObject_10, &data_143948d08)
    noreturn

if (var_c8 u>= 0x10)
    int64_t* rcx_89 = var_e0
    int64_t* rax_74 = rcx_89
    
    if (var_c8 + 1 u>= 0x1000)
        rcx_89 = rcx_89[-1]
        
        if (rax_74 - rcx_89 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    result = j_sub_140a74f90(rcx_89)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
