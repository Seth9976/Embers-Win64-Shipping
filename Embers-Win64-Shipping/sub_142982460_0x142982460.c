// 函数: sub_142982460
// 地址: 0x142982460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1f8 = -2
void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int32_t var_208 = 0
void* rax_2 = sub_14297db80(arg1, "displayWindow")
int32_t r9 = *(rax_2 + 8)
int32_t r8 = *(rax_2 + 0x10)
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

if (r9 s<= r8)
    int32_t rcx = *(rax_2 + 0xc)
    int32_t rdx = *(rax_2 + 0x14)
    
    if (rcx s<= rdx && r9 s> 0xc0000001 && rcx s> 0xc0000001 && r8 s< 0x3fffffff
            && rdx s< 0x3fffffff)
        void* rax_3 = sub_14297db80(arg1, "dataWindow")
        int32_t r8_1 = *(rax_3 + 8)
        int32_t rcx_2 = *(rax_3 + 0x10)
        
        if (r8_1 s<= rcx_2)
            int32_t r9_1 = *(rax_3 + 0xc)
            int32_t rdx_1 = *(rax_3 + 0x14)
            
            if (r9_1 s<= rdx_1 && r8_1 s> 0xc0000001 && r9_1 s> 0xc0000001 && rcx_2 s< 0x3fffffff
                    && rdx_1 s< 0x3fffffff)
                int32_t rax_4 = data_143fed154
                void _Destination
                void var_158
                
                if (rax_4 s> 0 && rax_4 s< rcx_2 - r8_1 + 1)
                    sub_1429779b0(&_Destination, 3, 1)
                    sub_14058b120(
                        std::ostream::operator<<(sub_14058b120(&var_158, 
                            "The width of the data window exceeds the maximum width of ")), 
                        "pixels.")
                    sub_142977aa0(&exceptionObject, &_Destination)
                    _CxxThrowException(&exceptionObject, &data_143946538)
                    noreturn
                
                int32_t rcx_5 = data_143fed158
                
                if (rcx_5 s> 0)
                    if (rcx_5 s< rdx_1 - r9_1 + 1)
                        sub_1429779b0(&_Destination, 3, 1)
                        sub_14058b120(
                            std::ostream::operator<<(sub_14058b120(&var_158, 
                                "The width of the data window exceeds the maximum width of ")), 
                            "pixels.")
                        sub_142977aa0(&exceptionObject, &_Destination)
                        _CxxThrowException(&exceptionObject, &data_143946538)
                        noreturn
                    
                    if (rax_4 s> 0 && sub_14297cd10(arg1, "chunkCount") != 0)
                        void* rax_7 = __RTDynamicCast(sub_14297db80(arg1, "chunkCount"), 0, 
                            &class Imf_2_3::Attribute `RTTI Type Descriptor', 
                            &class Imf_2_3::TypedAttribute<int32_t> `RTTI Type Descriptor', 0)
                        
                        if (rax_7 == 0)
                            sub_14297d630(&exceptionObject, "Unexpected attribute type.")
                            _CxxThrowException(&exceptionObject, &data_143946630)
                            noreturn
                        
                        if (sx.q(*(rax_7 + 8)) u> sx.q(data_143fed158) * sx.q(data_143fed154))
                            sub_1429779b0(&_Destination, 3, 1)
                            sub_14058b120(
                                std::ostream::operator<<(sub_14058b120(&var_158, 
                                    "chunkCount exceeds maximum area of ")), 
                                " pixels.")
                            sub_142977aa0(&exceptionObject, &_Destination)
                            _CxxThrowException(&exceptionObject, &data_143946538)
                            noreturn
                
                int32_t zmm1 = *(sub_14297db80(arg1, "pixelAspectRatio") + 8)
                
                if (9.99999997e-07f f> zmm1 || zmm1 f> 1000000f)
                    sub_14297d3f0(&exceptionObject, "Invalid pixel aspect ratio in image header.")
                    _CxxThrowException(&exceptionObject, &data_143946538)
                    noreturn
                
                if (0f f> *(sub_14297db80(arg1, "screenWindowWidth") + 8))
                    sub_14297d3f0(&exceptionObject, "Invalid screen window width in image header.")
                    _CxxThrowException(&exceptionObject, &data_143946538)
                    noreturn
                
                if (arg3 != 0)
                    if (sub_14297ce20(arg1, "name") == 0)
                        sub_14297d3f0(&exceptionObject, 
                            "Headers in a multipart file should have name attribute.")
                        _CxxThrowException(&exceptionObject, &data_143946538)
                        noreturn
                    
                    if (sub_14297ce20(arg1, "type") == 0)
                        sub_14297d3f0(&exceptionObject, 
                            "Headers in a multipart file should have type attribute.")
                        _CxxThrowException(&exceptionObject, &data_143946538)
                        noreturn
                
                char var_68
                int128_t var_58
                char var_48
                int64_t* rax_17
                int32_t rbx_1
                
                if (sub_14297ce20(arg1, "type") == 0)
                    var_58 = data_143702ea0
                    var_68 = 0
                    sub_14058ad40(&var_68, &data_1437020ab, 0)
                    rax_17 = &var_68
                    rbx_1 = 2
                else
                    void* rax_16 = __RTDynamicCast(sub_14297db80(arg1, "type"), 0, 
                        &class Imf_2_3::Attribute `RTTI Type Descriptor', 
                        &class Imf_2_3::TypedAttribute<class std::string> `RTTI Type Descriptor', 0)
                    
                    if (rax_16 == 0)
                        sub_14297d630(&exceptionObject, "Unexpected attribute type.")
                        _CxxThrowException(&exceptionObject, &data_143946630)
                        noreturn
                    
                    rax_17 = sub_140592d30(&var_48, rax_16 + 8)
                    rbx_1 = 1
                
                var_208 = rbx_1
                void* var_188
                sub_140592d30(&var_188, rax_17)
                
                if ((rbx_1.b & 2) != 0)
                    rbx_1 &= 0xfffffffd
                    int64_t rdx_7 = var_58:8.q
                    
                    if (rdx_7 u>= 0x10)
                        void* rcx_21 = var_68.q
                        void* rax_18 = rcx_21
                        
                        if (rdx_7 + 1 u>= 0x1000)
                            rcx_21 = *(rcx_21 - 8)
                            
                            if (rax_18 - rcx_21 - 8 u> 0x1f)
                                _invalid_parameter_noinfo_noreturn()
                                noreturn
                        
                        j_sub_140a74f90(rcx_21)
                
                if ((rbx_1.b & 1) != 0)
                    int64_t var_30
                    
                    if (var_30 u>= 0x10)
                        void* rcx_22 = var_48.q
                        void* rax_21 = rcx_22
                        
                        if (var_30 + 1 u>= 0x1000)
                            rcx_22 = *(rcx_22 - 8)
                            
                            if (rax_21 - rcx_22 - 8 u> 0x1f)
                                _invalid_parameter_noinfo_noreturn()
                                noreturn
                        
                        j_sub_140a74f90(rcx_22)
                    
                    int128_t var_38_1 = data_143702ea0
                    var_48 = 0
                
                int64_t var_178
                int64_t* result
                int64_t var_170
                void* rcx_24
                
                if (var_178 == 0)
                label_142982874:
                    int32_t rbx_2 = *(sub_14297db80(arg1, "lineOrder") + 8)
                    
                    if (arg2 != 0)
                        strncpy(&_Destination, "tiles", 0xff)
                        char var_69_1 = 0
                        void** r10_1 = *arg1
                        void** r8_2 = r10_1[1]
                        void** r11_1 = r10_1
                        
                        while (*(r8_2 + 0x19) == 0)
                            void* rax_28 = &r8_2[4]
                            int64_t r9_2 = &_Destination - rax_28
                            uint32_t i
                            uint32_t rdx_13
                            
                            do
                                rdx_13 = zx.d(*rax_28)
                                i = zx.d(*(rax_28 + r9_2))
                                
                                if (rdx_13 != i)
                                    break
                                
                                rax_28 += 1
                            while (i != 0)
                            
                            if (rdx_13 - i s>= 0)
                                r10_1 = r8_2
                                r8_2 = *r8_2
                            else
                                r8_2 = r8_2[2]
                        
                        uint32_t i_1
                        uint32_t rdx_15
                        
                        if (r10_1 != r11_1)
                            void* rax_29 = &_Destination
                            
                            do
                                rdx_15 = zx.d(*rax_29)
                                i_1 = zx.d(*(rax_29 + &r10_1[4] - &_Destination))
                                
                                if (rdx_15 != i_1)
                                    break
                                
                                rax_29 += 1
                            while (i_1 != 0)
                        
                        if (r10_1 == r11_1 || rdx_15 - i_1 s< 0)
                            r10_1 = r11_1
                        
                        int64_t rax_30
                        
                        if (r10_1 != r11_1)
                            rax_30 = __RTDynamicCast(r10_1[0x24], 0, 
                                &class Imf_2_3::Attribute `RTTI Type Descriptor', 
                                &class Imf_2_3::TypedAttribute<class Imf_2_3::TileDescription> `RTTI Type Descriptor', 
                                0)
                        
                        if (r10_1 == r11_1 || rax_30 == 0)
                            sub_14297d3f0(&exceptionObject, 
                                "Tiled image has no tile description attribute.")
                            _CxxThrowException(&exceptionObject, &data_143946538)
                            noreturn
                        
                        void* rax_32 = __RTDynamicCast(sub_14297db80(arg1, "tiles"), 0, 
                            &class Imf_2_3::Attribute `RTTI Type Descriptor', 
                            &class Imf_2_3::TypedAttribute<class Imf_2_3::TileDescription> `RTTI Type Descriptor', 
                            0)
                        
                        if (rax_32 == 0)
                            sub_14297d630(&exceptionObject, "Unexpected attribute type.")
                            _CxxThrowException(&exceptionObject, &data_143946630)
                            noreturn
                        
                        int32_t rdx_17 = *(rax_32 + 8)
                        int32_t r8_5
                        
                        if (rdx_17 != 0)
                            r8_5 = *(rax_32 + 0xc)
                        
                        if (rdx_17 == 0 || r8_5 == 0)
                            sub_14297d3f0(&exceptionObject, "Invalid tile size in image header.")
                            _CxxThrowException(&exceptionObject, &data_143946538)
                            noreturn
                        
                        int32_t rcx_32 = data_143fed15c
                        
                        if (rcx_32 s> 0 && rcx_32 s< rdx_17)
                            sub_1429779b0(&_Destination, 3, 1)
                            sub_14058b120(
                                std::ostream::operator<<(sub_14058b120(&var_158, 
                                    "The width of the tiles exceeds the maximum width of ")), 
                                "pixels.")
                            sub_142977aa0(&exceptionObject, &_Destination)
                            _CxxThrowException(&exceptionObject, &data_143946538)
                            noreturn
                        
                        int32_t rcx_33 = data_143fed160
                        
                        if (rcx_33 s> 0 && rcx_33 s< r8_5)
                            sub_1429779b0(&_Destination, 3, 1)
                            sub_14058b120(
                                std::ostream::operator<<(sub_14058b120(&var_158, 
                                    "The width of the tiles exceeds the maximum width of ")), 
                                "pixels.")
                            sub_142977aa0(&exceptionObject, &_Destination)
                            _CxxThrowException(&exceptionObject, &data_143946538)
                            noreturn
                        
                        if (*(rax_32 + 0x10) u> 2)
                            sub_14297d3f0(&exceptionObject, "Invalid level mode in image header.")
                            _CxxThrowException(&exceptionObject, &data_143946538)
                            noreturn
                        
                        if (*(rax_32 + 0x14) u> 1)
                            sub_14297d3f0(&exceptionObject, 
                                "Invalid level rounding mode in image header.")
                            _CxxThrowException(&exceptionObject, &data_143946538)
                            noreturn
                        
                        if (rbx_2 u> 2)
                            sub_14297d3f0(&exceptionObject, "Invalid line order in image header.")
                            _CxxThrowException(&exceptionObject, &data_143946538)
                            noreturn
                    else if (rbx_2 u> 1)
                        sub_14297d3f0(&exceptionObject, "Invalid line order in image header.")
                        _CxxThrowException(&exceptionObject, &data_143946538)
                        noreturn
                    
                    if (sub_14298bdd0(*(sub_14297db80(arg1, "compression") + 8)) == 0)
                        sub_14297d3f0(&exceptionObject, "Unknown compression type in image header.")
                        _CxxThrowException(&exceptionObject, &data_143946538)
                        noreturn
                    
                    if (sub_1429a34a0(&var_188) != 0
                            && sub_14298bde0(*(sub_14297db80(arg1, "compression") + 8)) == 0)
                        sub_14297d3f0(&exceptionObject, 
                            "Compression type in header not valid for deep data")
                        _CxxThrowException(&exceptionObject, &data_143946538)
                        noreturn
                    
                    int64_t* rbx_3 = sub_14297db80(arg1, "channels") + 8
                    sub_14297bd10(rbx_3, &var_208)
                    void var_200
                    result = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                        rbx_3, &var_200)
                    void* i_2 = var_208.q
                    
                    if (arg2 == 0)
                        for (; i_2 != *result; i_2 = var_208.q)
                            int32_t rax_40 = *(i_2 + 0x11c)
                            
                            if (rax_40 != 0 && rax_40 != 1 && rax_40 != 2)
                                sub_1429779b0(&_Destination, 3, 1)
                                char* rax_79 = sub_142981d20(&var_208)
                                sub_14058b120(
                                    sub_14058b120(sub_14058b120(&var_158, "Pixel type of ""), 
                                        rax_79), 
                                    "" image channel is invalid.")
                                sub_142977aa0(&exceptionObject, &_Destination)
                                _CxxThrowException(&exceptionObject, &data_143946538)
                                noreturn
                            
                            int32_t r8_6 = *(i_2 + 0x120)
                            
                            if (r8_6 s< 1)
                                sub_1429779b0(&_Destination, 3, 1)
                                char* rax_97 = sub_142981d20(&var_208)
                                sub_14058b120(
                                    sub_14058b120(
                                        sub_14058b120(&var_158, 
                                            "The x subsampling factor for the ""), 
                                        rax_97), 
                                    "" channel is invalid.")
                                sub_142977aa0(&exceptionObject, &_Destination)
                                _CxxThrowException(&exceptionObject, &data_143946538)
                                noreturn
                            
                            int32_t r9_3 = *(i_2 + 0x124)
                            
                            if (r9_3 s< 1)
                                sub_1429779b0(&_Destination, 3, 1)
                                char* rax_94 = sub_142981d20(&var_208)
                                sub_14058b120(
                                    sub_14058b120(
                                        sub_14058b120(&var_158, 
                                            "The y subsampling factor for the ""), 
                                        rax_94), 
                                    "" channel is invalid.")
                                sub_142977aa0(&exceptionObject, &_Destination)
                                _CxxThrowException(&exceptionObject, &data_143946538)
                                noreturn
                            
                            int32_t rcx_44 = *(rax_3 + 8)
                            
                            if (mods.dp.d(sx.q(rcx_44), r8_6) != 0)
                                sub_1429779b0(&_Destination, 3, 1)
                                char* rax_91 = sub_142981d20(&var_208)
                                sub_14058b120(
                                    sub_14058b120(
                                        sub_14058b120(&var_158, 
                                            "The minimum x coordinate of the image's data window is not a "
                                "multiple of the x subsampling factor of the ""), 
                                        rax_91), 
                                    "" channel.")
                                sub_142977aa0(&exceptionObject, &_Destination)
                                _CxxThrowException(&exceptionObject, &data_143946538)
                                noreturn
                            
                            int32_t r10_2 = *(rax_3 + 0xc)
                            
                            if (mods.dp.d(sx.q(r10_2), r9_3) != 0)
                                sub_1429779b0(&_Destination, 3, 1)
                                char* rax_88 = sub_142981d20(&var_208)
                                sub_14058b120(
                                    sub_14058b120(
                                        sub_14058b120(&var_158, 
                                            "The minimum y coordinate of the image's data window is not a "
                                "multiple of the y subsampling factor of the ""), 
                                        rax_88), 
                                    "" channel.")
                                sub_142977aa0(&exceptionObject, &_Destination)
                                _CxxThrowException(&exceptionObject, &data_143946538)
                                noreturn
                            
                            if (mods.dp.d(sx.q(*(rax_3 + 0x10) - rcx_44 + 1), r8_6) != 0)
                                sub_1429779b0(&_Destination, 3, 1)
                                char* rax_85 = sub_142981d20(&var_208)
                                sub_14058b120(
                                    sub_14058b120(
                                        sub_14058b120(&var_158, 
                                            "Number of pixels per row in the image's data window is not a "
                                "multiple of the x subsampling factor of the ""), 
                                        rax_85), 
                                    "" channel.")
                                sub_142977aa0(&exceptionObject, &_Destination)
                                _CxxThrowException(&exceptionObject, &data_143946538)
                                noreturn
                            
                            if (mods.dp.d(sx.q(*(rax_3 + 0x14) - r10_2 + 1), r9_3) != 0)
                                sub_1429779b0(&_Destination, 3, 1)
                                char* rax_82 = sub_142981d20(&var_208)
                                sub_14058b120(
                                    sub_14058b120(
                                        sub_14058b120(&var_158, 
                                            "Number of pixels per column in the image's data window is not a "
                                "multiple of the y subsampling factor of the ""), 
                                        rax_82), 
                                    "" channel.")
                                sub_142977aa0(&exceptionObject, &_Destination)
                                _CxxThrowException(&exceptionObject, &data_143946538)
                                noreturn
                            
                            sub_14297bb00(&var_208)
                            result = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                                rbx_3, &var_200)
                    else
                        for (; i_2 != *result; i_2 = var_208.q)
                            int32_t rax_39 = *(i_2 + 0x11c)
                            
                            if (rax_39 != 0 && rax_39 != 1 && rax_39 != 2)
                                sub_1429779b0(&_Destination, 3, 1)
                                char* rax_70 = sub_142981d20(&var_208)
                                sub_14058b120(
                                    sub_14058b120(sub_14058b120(&var_158, "Pixel type of ""), 
                                        rax_70), 
                                    "" image channel is invalid.")
                                sub_142977aa0(&exceptionObject, &_Destination)
                                _CxxThrowException(&exceptionObject, &data_143946538)
                                noreturn
                            
                            if (*(i_2 + 0x120) != 1)
                                sub_1429779b0(&_Destination, 3, 1)
                                char* rax_76 = sub_142981d20(&var_208)
                                sub_14058b120(
                                    sub_14058b120(
                                        sub_14058b120(&var_158, 
                                            "The x subsampling factor for the ""), 
                                        rax_76), 
                                    "" channel is not 1.")
                                sub_142977aa0(&exceptionObject, &_Destination)
                                _CxxThrowException(&exceptionObject, &data_143946538)
                                noreturn
                            
                            if (*(i_2 + 0x124) != 1)
                                sub_1429779b0(&_Destination, 3, 1)
                                char* rax_73 = sub_142981d20(&var_208)
                                sub_14058b120(
                                    sub_14058b120(
                                        sub_14058b120(&var_158, 
                                            "The y subsampling factor for the ""), 
                                        rax_73), 
                                    "" channel is not 1.")
                                sub_142977aa0(&exceptionObject, &_Destination)
                                _CxxThrowException(&exceptionObject, &data_143946538)
                                noreturn
                            
                            sub_14297bb00(&var_208)
                            result = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                                rbx_3, &var_200)
                    
                    if (var_170 u>= 0x10)
                        rcx_24 = var_188
                        void* rax_57 = rcx_24
                        
                        if (var_170 + 1 u>= 0x1000)
                            rcx_24 = *(rcx_24 - 8)
                            
                            if (rax_57 - rcx_24 - 8 u> 0x1f)
                                _invalid_parameter_noinfo_noreturn()
                                noreturn
                        
                        result = j_sub_140a74f90(rcx_24)
                else
                    result = sub_1429a3540(&var_188)
                    
                    if (result.b != 0)
                        goto label_142982874
                    
                    if (var_170 u>= 0x10)
                        rcx_24 = var_188
                        void* rax_24 = rcx_24
                        
                        if (var_170 + 1 u>= 0x1000)
                            rcx_24 = *(rcx_24 - 8)
                            
                            if (rax_24 - rcx_24 - 8 u> 0x1f)
                                _invalid_parameter_noinfo_noreturn()
                                noreturn
                        
                        result = j_sub_140a74f90(rcx_24)
                __security_check_cookie(rax_1 ^ &var_238)
                return result
        
        sub_14297d3f0(&exceptionObject, "Invalid data window in image header.")
        _CxxThrowException(&exceptionObject, &data_143946538)
        noreturn

sub_14297d3f0(&exceptionObject, "Invalid display window in image header.")
_CxxThrowException(&exceptionObject, &data_143946538)
noreturn
