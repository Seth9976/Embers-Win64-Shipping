// 函数: sub_1405e6f00
// 地址: 0x1405e6f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
struct ID3DBlob ppErrorMsgs_1
struct ID3DBlob* ppErrorMsgs = &ppErrorMsgs_1
struct ID3DBlob ppCode_4
struct ID3DBlob* ppCode = &ppCode_4
uint32_t Flags2 = 0
uint32_t Flags1 = 0
PSTR pTarget = "ps_5_0"
ppCode_4 = 0
PSTR pEntrypoint = "PShader"
struct ID3DInclude pInclude = 0
struct ID3DBlob ppCode_1 = 0
ppErrorMsgs_1 = 0
D3DCompile(
    "\n\n\tTexture2D TextureColor : register(t0);\n\tTexture2D TextureAlpha : register(t1);\n\n\tcbuffer "
"cbPerFrameData : register(b0)\n\t{\n\t\tint Mode;\n\t\tint Index;\n\t\tint WriteY;\n\t\tint "
"Padding;\n\t};\n\n\tSamplerState TextureSampler : register(s0);\n\n\tfloat4 PS", 
    0x791, nullptr, nullptr, pInclude, pEntrypoint, pTarget, Flags1, Flags2, ppCode, ppErrorMsgs)
struct ID3DBlob ppErrorMsgs_2 = ppErrorMsgs_1

if (ppErrorMsgs_2 != 0)
    (*(*ppErrorMsgs_2 + 0x18))(ppErrorMsgs_2)

struct ID3DBlob ppCode_3

if (ppErrorMsgs_2 != 0 && ppCode_4 == 0)
    ppCode_3.vtable.b = 0
else
    D3DCompile(
        "\n\tstruct VOut\n\t{\n\t\tfloat4 position : SV_POSITION;\n\t\tfloat2 textureUV : TEXCOORD0;\n\t"
    "};\n\n\tVOut VShader(float4 position : POSITION, float2 textureUV : TEXCOORD0)\n\t{\n\t\tVOut "
    "output;\n\t\toutput.position = position;\n\t\toutput.textureUV = textureUV;\n\t\treturn output;"
    "\t}\n\t", 
        0x105, nullptr, nullptr, 0, "VShader", "vs_5_0", 0, 0, &ppCode_1, &ppErrorMsgs_1)
    struct ID3DBlob ppErrorMsgs_3 = ppErrorMsgs_1
    
    if (ppErrorMsgs_3 != 0)
        (*(*ppErrorMsgs_3 + 0x18))(ppErrorMsgs_3)
    
    if (ppErrorMsgs_3 == 0 || ppCode_1 != 0)
        ppCode_3 = ppCode_4
        int64_t* rsi_1 = *(arg1 + 0x68)
        int128_t zmm6
        int128_t var_38_1 = zmm6
        int64_t* var_238 = nullptr
        int64_t* var_240 = nullptr
        int64_t r14_1 = *rsi_1
        int128_t zmm7
        int128_t var_48_1 = zmm7
        int128_t zmm8
        int128_t var_58_1 = zmm8
        int128_t zmm9
        int128_t var_68_1 = zmm9
        int128_t zmm10
        int128_t var_78_1 = zmm10
        int64_t rax_5 = (*(*ppCode_3 + 0x20))(ppCode_3)
        
        if ((*(r14_1 + 0x78))(rsi_1, (*(*ppCode_3 + 0x18))(ppCode_3), rax_5, 0, &var_238) s< 0)
            ppCode_3.vtable.b = 0
        else
            ppCode_3 = ppCode_1
            int64_t* rsi_2 = *(arg1 + 0x68)
            int64_t r14_2 = *rsi_2
            int64_t rax_10 = (*(*ppCode_3 + 0x20))(ppCode_3)
            
            if ((*(r14_2 + 0x60))(rsi_2, (*(*ppCode_3 + 0x18))(ppCode_3), rax_10, 0, &var_240) s< 0)
                ppCode_3.vtable.b = 0
            else
                int64_t* rcx_6 = *(arg1 + 0x68)
                int64_t var_1d8 = 0x10
                int64_t var_1d0_1 = 4
                int32_t var_1c8_1 = 0
                
                if ((*(*rcx_6 + 0x18))(rcx_6, &var_1d8, 0, arg1 + 0xd0) s< 0)
                    ppCode_3.vtable.b = 0
                else
                    int64_t* rcx_7 = *(arg1 + 0x70)
                    (*(*rcx_7 + 0x80))(rcx_7, 0, 1, arg1 + 0xd0)
                    int64_t* rcx_8 = *(arg1 + 0x70)
                    int64_t rdx_4 = *(arg1 + 0xd0)
                    *(arg1 + 0xd8) = 0
                    PSTR var_288
                    var_288.d = 0
                    PSTR var_290
                    var_290.d = 0
                    (*(*rcx_8 + 0x180))(rcx_8, rdx_4, 0, 0, arg1 + 0xd8, var_290, var_288)
                    int64_t* rcx_9 = *(arg1 + 0x70)
                    (*(*rcx_9 + 0x58))(rcx_9, var_240, 0, 0)
                    int64_t* rcx_10 = *(arg1 + 0x70)
                    (*(*rcx_10 + 0x48))(rcx_10, var_238, 0, 0)
                    ppCode_3 = ppCode_1
                    int64_t* rsi_3 = *(arg1 + 0x68)
                    char const* const var_228 = "POSITION"
                    int32_t var_220_1 = 0
                    char const* const var_208_1 = "TEXCOORD"
                    int64_t var_21c_1 = 6
                    int64_t var_214_1 = 0
                    int32_t var_20c_1 = 0
                    int32_t var_200_1 = 0
                    int64_t var_1fc_1 = 0x10
                    int64_t var_1f4_1 = 0xc
                    int32_t var_1ec_1 = 0
                    int64_t r14_3 = *rsi_3
                    int64_t rax_21 = (*(*ppCode_3 + 0x20))(ppCode_3)
                    
                    if ((*(r14_3 + 0x58))(rsi_3, &var_228, 2, (*(*ppCode_3 + 0x18))(ppCode_3), 
                            rax_21, arg1 + 0xc0) s< 0)
                        ppCode_3.vtable.b = 0
                    else
                        int64_t* rcx_14 = *(arg1 + 0x70)
                        (*(*rcx_14 + 0x88))(rcx_14, *(arg1 + 0xc0))
                        void var_1a8
                        memset(&var_1a8, 0, 0x108)
                        int64_t* rcx_16 = *(arg1 + 0x68)
                        char var_184_1 = 0xf
                        int64_t var_230 = 0
                        
                        if ((*(*rcx_16 + 0xa0))(rcx_16, &var_1a8, &var_230) s< 0)
                            ppCode_3.vtable.b = 0
                        else
                            int64_t* rcx_17 = *(arg1 + 0x70)
                            int64_t rdx_10 = var_230
                            int128_t var_98 = data_142d3f670
                            (*(*rcx_17 + 0x118))(rcx_17, rdx_10, &var_98, 0xffffffff)
                            int64_t* rcx_18 = *(arg1 + 0x68)
                            int64_t var_1b0_1 = 0
                            int32_t var_1bc_1 = 2
                            int32_t var_1c0 = 0x50
                            int32_t var_1b8_1 = 1
                            int32_t var_1b4_1 = 0x10000
                            
                            if ((*(*rcx_18 + 0x18))(rcx_18, &var_1c0, 0, arg1 + 0xc8) s< 0)
                                ppCode_3.vtable.b = 0
                            else
                                int64_t* rcx_19 = *(arg1 + 0x70)
                                int64_t var_298_4
                                var_298_4.d = 0
                                int64_t var_1e8
                                
                                if ((*(*rcx_19 + 0x70))(rcx_19, *(arg1 + 0xc8), 0, 4, var_298_4, 
                                        &var_1e8) s< 0)
                                    ppCode_3.vtable.b = 0
                                else
                                    __builtin_memcpy(var_1e8, 
                                        "\x00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x"
                                    "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00"
                                    "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\xbf\x00\x00\x80"
                                    "bf\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80"
                                    "3f\x00\x00\x80\xbf\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80"
                                    "3f", 
                                        0x50)
                                    int64_t* rcx_20 = *(arg1 + 0x70)
                                    (*(*rcx_20 + 0x78))(rcx_20, *(arg1 + 0xc8), 0)
                                    ppCode_3.vtable.b = 1
        
        int64_t* rcx_21 = var_240
        
        if (rcx_21 != 0)
            (*(*rcx_21 + 0x10))(rcx_21)
        
        int64_t* rcx_22 = var_238
        
        if (rcx_22 != 0)
            (*(*rcx_22 + 0x10))(rcx_22)
    else
        ppCode_3.vtable.b = 0

struct ID3DBlob ppErrorMsgs_4 = ppErrorMsgs_1

if (ppErrorMsgs_4 != 0)
    (*(*ppErrorMsgs_4 + 0x10))(ppErrorMsgs_4)

struct ID3DBlob ppCode_2 = ppCode_1

if (ppCode_2 != 0)
    int64_t rdx_14 = *ppCode_2
    (*(rdx_14 + 0x10))(ppCode_2, rdx_14)

struct ID3DBlob ppCode_5 = ppCode_4

if (ppCode_5 != 0)
    int64_t rdx_15 = *ppCode_5
    (*(rdx_15 + 0x10))(ppCode_5, rdx_15)

__security_check_cookie(rax_1 ^ &var_2b8)
return zx.q(ppCode_3.vtable.b)
