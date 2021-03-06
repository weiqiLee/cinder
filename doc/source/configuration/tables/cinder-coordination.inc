..
    Warning: Do not edit this file. It is automatically generated from the
    software project's code and your changes will be overwritten.

    The tool to generate this file lives in openstack-doc-tools repository.

    Please make any changes needed in the code, then run the
    autogenerate-config-doc tool from the openstack-doc-tools repository, or
    ask for help on the documentation mailing list, IRC channel or meeting.

.. _cinder-coordination:

.. list-table:: Description of Coordination configuration options
   :header-rows: 1
   :class: config-ref-table

   * - Configuration option = Default value
     - Description
   * - **[coordination]**
     -
   * - ``backend_url`` = ``file://$state_path``
     - (String) The backend URL to use for distributed coordination.
   * - ``heartbeat`` = ``1.0``
     - (Floating point) Number of seconds between heartbeats for distributed coordination.
   * - ``initial_reconnect_backoff`` = ``0.1``
     - (Floating point) Initial number of seconds to wait after failed reconnection.
   * - ``max_reconnect_backoff`` = ``60.0``
     - (Floating point) Maximum number of seconds between sequential reconnection retries.
