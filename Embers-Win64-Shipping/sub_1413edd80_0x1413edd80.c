// 函数: sub_1413edd80
// 地址: 0x1413edd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143eca3a0 s> *rbx_1)
    _Init_thread_header(&data_143eca3a0)
    
    if (data_143eca3a0 == 0xffffffff)
        sub_140b58260(&data_143eca398, u"FLocalVertexFactory", 0)
        _Init_thread_footer(&data_143eca3a0)

if (data_143eca3b0 s> *rbx_1)
    _Init_thread_header(&data_143eca3b0)
    
    if (data_143eca3b0 == 0xffffffff)
        sub_140b58260(&data_143eca3a8, u"FGPUSkinPassthroughVertexFactory", 0)
        _Init_thread_footer(&data_143eca3b0)

if (data_143eca3c0 s> *rbx_1)
    _Init_thread_header(&data_143eca3c0)
    
    if (data_143eca3c0 == 0xffffffff)
        sub_140b58260(&data_143eca3b8, u"FInstancedStaticMeshVertexFactory", 0)
        _Init_thread_footer(&data_143eca3c0)

if (data_143eca3d0 s> *rbx_1)
    _Init_thread_header(&data_143eca3d0)
    
    if (data_143eca3d0 == 0xffffffff)
        sub_140b58260(&data_143eca3c8, u"FNiagaraRibbonVertexFactory", 0)
        _Init_thread_footer(&data_143eca3d0)

if (data_143eca3e0 s> *rbx_1)
    _Init_thread_header(&data_143eca3e0)
    
    if (data_143eca3e0 == 0xffffffff)
        sub_140b58260(&data_143eca3d8, u"FNiagaraSpriteVertexFactory", 0)
        _Init_thread_footer(&data_143eca3e0)

if (data_143eca3f0 s> *rbx_1)
    _Init_thread_header(&data_143eca3f0)
    
    if (data_143eca3f0 == 0xffffffff)
        sub_140b58260(&data_143eca3e8, u"FGeometryCacheVertexVertexFactory", 0)
        _Init_thread_footer(&data_143eca3f0)

if (data_143eca400 s> *rbx_1)
    _Init_thread_header(&data_143eca400)
    
    if (data_143eca400 == 0xffffffff)
        sub_140b58260(&data_143eca3f8, u"FLandscapeVertexFactory", 0)
        _Init_thread_footer(&data_143eca400)

if (data_143eca410 s> *rbx_1)
    _Init_thread_header(&data_143eca410)
    
    if (data_143eca410 == 0xffffffff)
        sub_140b58260(&data_143eca408, u"FLandscapeFixedGridVertexFactory", 0)
        _Init_thread_footer(&data_143eca410)

if (data_143eca420 s> *rbx_1)
    _Init_thread_header(&data_143eca420)
    
    if (data_143eca420 == 0xffffffff)
        sub_140b58260(&data_143eca418, u"FLandscapeXYOffsetVertexFactory", 0)
        _Init_thread_footer(&data_143eca420)

void arg_8
sub_140b4c620(&arg_8, &data_143eca398)
int64_t result

if (arg1 != j_sub_1419cfe40(&arg_8))
    void arg_10
    sub_140b4c620(&arg_10, &data_143eca3a8)
    
    if (arg1 != j_sub_1419cfe40(&arg_10))
        void arg_18
        sub_140b4c620(&arg_18, &data_143eca3b8)
        
        if (arg1 != j_sub_1419cfe40(&arg_18))
            void arg_20
            sub_140b4c620(&arg_20, &data_143eca3c8)
            
            if (arg1 != j_sub_1419cfe40(&arg_20))
                void var_48
                sub_140b4c620(&var_48, &data_143eca3d8)
                
                if (arg1 != j_sub_1419cfe40(&var_48))
                    void var_40
                    sub_140b4c620(&var_40, &data_143eca3e8)
                    
                    if (arg1 != j_sub_1419cfe40(&var_40))
                        void var_38
                        sub_140b4c620(&var_38, &data_143eca3f8)
                        
                        if (arg1 != j_sub_1419cfe40(&var_38))
                            void var_30
                            sub_140b4c620(&var_30, &data_143eca408)
                            
                            if (arg1 != j_sub_1419cfe40(&var_30))
                                void var_28
                                sub_140b4c620(&var_28, &data_143eca418)
                                
                                if (arg1 != j_sub_1419cfe40(&var_28))
                                    result.b = 0
                                    return result

result.b = 1
return result
